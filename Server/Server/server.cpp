#include <iostream>
#include <fstream>
#include <string>
#include <grpc/grpc.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpc++/server.h>
#include <grpc++/server_builder.h>
#include <grpc++/server_context.h>
#include <grpc++/security/server_credentials.h>
#include "../../proto/transfer_file.grpc.pb.h"
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerWriter;
using grpc::Status;
using grpc::ServerCompletionQueue;
using grpc::ServerAsyncResponseWriter;
using grpc::ServerAsyncWriter;
using transferfile::Chunk;
using transferfile::FileRequest;
using transferfile::TransferFile;
#define CHUNK_SIZE 2048

//абстрактный класс от которого отнаследуемся
class CommonCallData
{
public:
    TransferFile::AsyncService* service_;
    ServerCompletionQueue* cq_;
    ServerContext ctx_;
    FileRequest request_;
    Chunk reply_;
    enum CallStatus { CREATE, PROCESS, FINISH };
    CallStatus status_;
    std::string prefix;
public:
    explicit CommonCallData(TransferFile::AsyncService* service, ServerCompletionQueue* cq) :
        service_(service), cq_(cq), status_(CREATE), prefix("Hello ")
    {}
    virtual ~CommonCallData() {}
    virtual void Proceed(bool = true) = 0;
};

class CallData1M : public CommonCallData
{
    ServerAsyncWriter<Chunk> responder_;
    bool new_responder_created;
    std::ifstream infile;
public:
    CallData1M(TransferFile::AsyncService* service, ServerCompletionQueue* cq) :
        CommonCallData(service, cq), responder_(&ctx_), new_responder_created(false){ Proceed(); } 
    virtual void Proceed(bool = true) override
    {
        if (status_ == CREATE)
        {
            std::cout << "[Proceed1M]: New responder for 1-M mode" << std::endl;
            service_->RequestDownload(&ctx_, &request_, &responder_, cq_, cq_, this);
            status_ = PROCESS;
        }
        else if (status_ == PROCESS)
        {
            if (!new_responder_created) 
            {
                new CallData1M(service_, cq_);
                new_responder_created = true;
                std::cout << "[Proceed1M]: request message = " << request_.name() << std::endl;
                infile.open(request_.name(), std::ifstream::in | std::ifstream::binary);
            } 
            if (/*ctx_.IsCancelled() || */ infile.eof()) {
                infile.close();
                std::cout << "[Proceed1M]: Trying finish" << std::endl;
                status_ = FINISH;
                responder_.Finish(Status(), (void*)this);
            }
            else {            
                char data[CHUNK_SIZE];
                std::cout << "[Proceed1M]: Writing " << request_.name() << std::endl;
                infile.read(data, CHUNK_SIZE);
                reply_.set_buffer(data, infile.gcount());
                responder_.Write(reply_, (void*)this);
            }
            
        }
        else if(status_ == FINISH)
        {
            std::cout << "[Proceed1M]: Good Bye" << std::endl;
            GPR_ASSERT(status_ == FINISH); //TODO: что и зачем это
            delete this;
        }
    }
};


class ServerImpl final 
{
public:
    ~ServerImpl()
    {
        server_->Shutdown();
        // Always shutdown the completion queue after the server.
        cq_->Shutdown();
    }

    void Run(std::string serverAddr = "0.0.0.0", std::string serverPort = "50051")
    {
        std::string server_address(serverAddr + ":" + serverPort);

        ServerBuilder builder;
        // Listen on the given address without any authentication mechanism.
        builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
        // Register "service_" as the instance through which we'll communicate with
        // clients. In this case it corresponds to an *asynchronous* service.
        builder.RegisterService(&service_);
        // Get hold of the completion queue used for the asynchronous communication
        // with the gRPC runtime.
        cq_ = builder.AddCompletionQueue();
        // Finally assemble the server.
        server_ = builder.BuildAndStart();
        std::cout << "Server listening on " << server_address << std::endl;

        // Proceed to the server's main loop.
        // Spawn a new CallData instance to serve new clients.
        new CallData1M(&service_, cq_.get());
    
        void* tag;  // uniquely identifies a request.
        bool ok;
        while (true)
        {
            GPR_ASSERT(cq_->Next(&tag, &ok));
            GPR_ASSERT(ok);
            CommonCallData* calldata = static_cast<CommonCallData*>(tag);
            calldata->Proceed(ok);
        }
    }

private:
    std::unique_ptr<ServerCompletionQueue> cq_;
    TransferFile::AsyncService service_;
    std::unique_ptr<Server> server_;
};


int main(int argc, char* argv[])
{   
    ServerImpl server;
    server.Run(argv[1], argv[2]);
}
