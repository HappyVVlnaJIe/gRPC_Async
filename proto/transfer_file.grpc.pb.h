// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: transfer_file.proto
#ifndef GRPC_transfer_5ffile_2eproto__INCLUDED
#define GRPC_transfer_5ffile_2eproto__INCLUDED

#include "transfer_file.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace transferfile {

class TransferFile final {
 public:
  static constexpr char const* service_full_name() {
    return "transferfile.TransferFile";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::transferfile::Chunk>> Download(::grpc::ClientContext* context, const ::transferfile::FileRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::transferfile::Chunk>>(DownloadRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::transferfile::Chunk>> AsyncDownload(::grpc::ClientContext* context, const ::transferfile::FileRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::transferfile::Chunk>>(AsyncDownloadRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::transferfile::Chunk>> PrepareAsyncDownload(::grpc::ClientContext* context, const ::transferfile::FileRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::transferfile::Chunk>>(PrepareAsyncDownloadRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Download(::grpc::ClientContext* context, const ::transferfile::FileRequest* request, ::grpc::ClientReadReactor< ::transferfile::Chunk>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderInterface< ::transferfile::Chunk>* DownloadRaw(::grpc::ClientContext* context, const ::transferfile::FileRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::transferfile::Chunk>* AsyncDownloadRaw(::grpc::ClientContext* context, const ::transferfile::FileRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::transferfile::Chunk>* PrepareAsyncDownloadRaw(::grpc::ClientContext* context, const ::transferfile::FileRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReader< ::transferfile::Chunk>> Download(::grpc::ClientContext* context, const ::transferfile::FileRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::transferfile::Chunk>>(DownloadRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::transferfile::Chunk>> AsyncDownload(::grpc::ClientContext* context, const ::transferfile::FileRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::transferfile::Chunk>>(AsyncDownloadRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::transferfile::Chunk>> PrepareAsyncDownload(::grpc::ClientContext* context, const ::transferfile::FileRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::transferfile::Chunk>>(PrepareAsyncDownloadRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Download(::grpc::ClientContext* context, const ::transferfile::FileRequest* request, ::grpc::ClientReadReactor< ::transferfile::Chunk>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReader< ::transferfile::Chunk>* DownloadRaw(::grpc::ClientContext* context, const ::transferfile::FileRequest& request) override;
    ::grpc::ClientAsyncReader< ::transferfile::Chunk>* AsyncDownloadRaw(::grpc::ClientContext* context, const ::transferfile::FileRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::transferfile::Chunk>* PrepareAsyncDownloadRaw(::grpc::ClientContext* context, const ::transferfile::FileRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Download_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Download(::grpc::ServerContext* context, const ::transferfile::FileRequest* request, ::grpc::ServerWriter< ::transferfile::Chunk>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Download : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Download() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Download() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Download(::grpc::ServerContext* /*context*/, const ::transferfile::FileRequest* /*request*/, ::grpc::ServerWriter< ::transferfile::Chunk>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDownload(::grpc::ServerContext* context, ::transferfile::FileRequest* request, ::grpc::ServerAsyncWriter< ::transferfile::Chunk>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Download<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Download : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Download() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::transferfile::FileRequest, ::transferfile::Chunk>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::transferfile::FileRequest* request) { return this->Download(context, request); }));
    }
    ~WithCallbackMethod_Download() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Download(::grpc::ServerContext* /*context*/, const ::transferfile::FileRequest* /*request*/, ::grpc::ServerWriter< ::transferfile::Chunk>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::transferfile::Chunk>* Download(
      ::grpc::CallbackServerContext* /*context*/, const ::transferfile::FileRequest* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Download<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Download : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Download() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Download() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Download(::grpc::ServerContext* /*context*/, const ::transferfile::FileRequest* /*request*/, ::grpc::ServerWriter< ::transferfile::Chunk>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Download : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Download() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Download() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Download(::grpc::ServerContext* /*context*/, const ::transferfile::FileRequest* /*request*/, ::grpc::ServerWriter< ::transferfile::Chunk>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDownload(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Download : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Download() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->Download(context, request); }));
    }
    ~WithRawCallbackMethod_Download() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Download(::grpc::ServerContext* /*context*/, const ::transferfile::FileRequest* /*request*/, ::grpc::ServerWriter< ::transferfile::Chunk>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* Download(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Download : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_Download() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::transferfile::FileRequest, ::transferfile::Chunk>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::transferfile::FileRequest, ::transferfile::Chunk>* streamer) {
                       return this->StreamedDownload(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_Download() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Download(::grpc::ServerContext* /*context*/, const ::transferfile::FileRequest* /*request*/, ::grpc::ServerWriter< ::transferfile::Chunk>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedDownload(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::transferfile::FileRequest,::transferfile::Chunk>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_Download<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_Download<Service > StreamedService;
};

}  // namespace transferfile


#endif  // GRPC_transfer_5ffile_2eproto__INCLUDED