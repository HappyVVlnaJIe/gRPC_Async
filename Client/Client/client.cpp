#include <iostream>
#include <fstream>
#include <string>

#include <grpcpp/grpcpp.h>

#include "../../proto/transfer_file.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::Status;
using grpc::ClientAsyncReader;
using grpc::CompletionQueue;
using transferfile::Chunk;
using transferfile::FileRequest;
using transferfile::TransferFile;
#define CHUNK_SIZE 2048

class TransferFileClient
{
public:
    TransferFileClient(std::shared_ptr<Channel> channel) : stub_(TransferFile::NewStub(channel)) {};
    void Download(std::string fName);
private:
    std::unique_ptr<TransferFile::Stub> stub_;
};

void TransferFileClient::Download(std::string fName)
{
    FileRequest request;
    request.set_name(fName);
    Chunk chunk;
    ClientContext context;
    std::unique_ptr<ClientReader<Chunk>> reader(stub_->Download(&context, request));

    std::ofstream outfile;
    const char* data;

    outfile.open(fName, std::ofstream::out | std::ofstream::trunc | std::ofstream::binary);
    while (reader->Read(&chunk))
    {
        data = chunk.buffer().c_str();
        outfile.write(data, chunk.buffer().length());
    }
    outfile.close();
}

int main(int argc, char* argv[])
{
    std::string serverAddr = argv[1];
    std::string serverPort = argv[2];
    std::cout << "server addr = " << serverAddr << std::endl;
    std::cout << "server port = " << serverPort << std::endl;
	TransferFileClient client(grpc::CreateChannel(serverAddr + ":" + serverPort, grpc::InsecureChannelCredentials()));
    TransferFileClient client1(grpc::CreateChannel(serverAddr + ":" + serverPort, grpc::InsecureChannelCredentials()));
    TransferFileClient client2(grpc::CreateChannel(serverAddr + ":" + serverPort, grpc::InsecureChannelCredentials()));
    TransferFileClient client3(grpc::CreateChannel(serverAddr + ":" + serverPort, grpc::InsecureChannelCredentials()));
    std::thread thread(&TransferFileClient::Download, &client, "test.txt");
    std::thread thread1(&TransferFileClient::Download, &client1, "test1.txt");
    std::thread thread2(&TransferFileClient::Download, &client2, "test2.txt");
    std::thread thread3(&TransferFileClient::Download, &client3, "test3.txt");
    thread.join();
    thread1.join();
    thread2.join();
    thread3.join();
    return 0;
}