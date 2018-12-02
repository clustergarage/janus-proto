// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: janus.proto
#ifndef GRPC_janus_2eproto__INCLUDED
#define GRPC_janus_2eproto__INCLUDED

#include "janus.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace janus {

class Janusd final {
 public:
  static constexpr char const* service_full_name() {
    return "janus.Janusd";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CreateWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::janus::JanusdHandle* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>> AsyncCreateWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>>(AsyncCreateWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>> PrepareAsyncCreateWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>>(PrepareAsyncCreateWatchRaw(context, request, cq));
    }
    virtual ::grpc::Status DestroyWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::janus::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>> AsyncDestroyWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>>(AsyncDestroyWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>> PrepareAsyncDestroyWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>>(PrepareAsyncDestroyWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::janus::JanusdHandle>> GetWatchState(::grpc::ClientContext* context, const ::janus::Empty& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::janus::JanusdHandle>>(GetWatchStateRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>> AsyncGetWatchState(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>>(AsyncGetWatchStateRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>> PrepareAsyncGetWatchState(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>>(PrepareAsyncGetWatchStateRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>* AsyncCreateWatchRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>* PrepareAsyncCreateWatchRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>* AsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>* PrepareAsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::janus::JanusdHandle>* GetWatchStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>* AsyncGetWatchStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>* PrepareAsyncGetWatchStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CreateWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::janus::JanusdHandle* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>> AsyncCreateWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>>(AsyncCreateWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>> PrepareAsyncCreateWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>>(PrepareAsyncCreateWatchRaw(context, request, cq));
    }
    ::grpc::Status DestroyWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::janus::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::Empty>> AsyncDestroyWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::Empty>>(AsyncDestroyWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::Empty>> PrepareAsyncDestroyWatch(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::Empty>>(PrepareAsyncDestroyWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::janus::JanusdHandle>> GetWatchState(::grpc::ClientContext* context, const ::janus::Empty& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::janus::JanusdHandle>>(GetWatchStateRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::janus::JanusdHandle>> AsyncGetWatchState(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::janus::JanusdHandle>>(AsyncGetWatchStateRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::janus::JanusdHandle>> PrepareAsyncGetWatchState(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::janus::JanusdHandle>>(PrepareAsyncGetWatchStateRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>* AsyncCreateWatchRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>* PrepareAsyncCreateWatchRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::janus::Empty>* AsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::janus::Empty>* PrepareAsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::janus::JanusdHandle>* GetWatchStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request) override;
    ::grpc::ClientAsyncReader< ::janus::JanusdHandle>* AsyncGetWatchStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::janus::JanusdHandle>* PrepareAsyncGetWatchStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CreateWatch_;
    const ::grpc::internal::RpcMethod rpcmethod_DestroyWatch_;
    const ::grpc::internal::RpcMethod rpcmethod_GetWatchState_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CreateWatch(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::JanusdHandle* response);
    virtual ::grpc::Status DestroyWatch(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::Empty* response);
    virtual ::grpc::Status GetWatchState(::grpc::ServerContext* context, const ::janus::Empty* request, ::grpc::ServerWriter< ::janus::JanusdHandle>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateWatch() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateWatch(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::JanusdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateWatch(::grpc::ServerContext* context, ::janus::JanusdConfig* request, ::grpc::ServerAsyncResponseWriter< ::janus::JanusdHandle>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DestroyWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DestroyWatch() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_DestroyWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DestroyWatch(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDestroyWatch(::grpc::ServerContext* context, ::janus::JanusdConfig* request, ::grpc::ServerAsyncResponseWriter< ::janus::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetWatchState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetWatchState() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetWatchState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetWatchState(::grpc::ServerContext* context, const ::janus::Empty* request, ::grpc::ServerWriter< ::janus::JanusdHandle>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetWatchState(::grpc::ServerContext* context, ::janus::Empty* request, ::grpc::ServerAsyncWriter< ::janus::JanusdHandle>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(2, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateWatch<WithAsyncMethod_DestroyWatch<WithAsyncMethod_GetWatchState<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_CreateWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateWatch() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateWatch(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::JanusdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DestroyWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DestroyWatch() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_DestroyWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DestroyWatch(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetWatchState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetWatchState() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetWatchState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetWatchState(::grpc::ServerContext* context, const ::janus::Empty* request, ::grpc::ServerWriter< ::janus::JanusdHandle>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CreateWatch() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::janus::JanusdConfig, ::janus::JanusdHandle>(std::bind(&WithStreamedUnaryMethod_CreateWatch<BaseClass>::StreamedCreateWatch, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CreateWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateWatch(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::JanusdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateWatch(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::janus::JanusdConfig,::janus::JanusdHandle>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DestroyWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_DestroyWatch() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::janus::JanusdConfig, ::janus::Empty>(std::bind(&WithStreamedUnaryMethod_DestroyWatch<BaseClass>::StreamedDestroyWatch, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_DestroyWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DestroyWatch(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDestroyWatch(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::janus::JanusdConfig,::janus::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateWatch<WithStreamedUnaryMethod_DestroyWatch<Service > > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_GetWatchState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_GetWatchState() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::SplitServerStreamingHandler< ::janus::Empty, ::janus::JanusdHandle>(std::bind(&WithSplitStreamingMethod_GetWatchState<BaseClass>::StreamedGetWatchState, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_GetWatchState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetWatchState(::grpc::ServerContext* context, const ::janus::Empty* request, ::grpc::ServerWriter< ::janus::JanusdHandle>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetWatchState(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::janus::Empty,::janus::JanusdHandle>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_GetWatchState<Service > SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateWatch<WithStreamedUnaryMethod_DestroyWatch<WithSplitStreamingMethod_GetWatchState<Service > > > StreamedService;
};

}  // namespace janus


#endif  // GRPC_janus_2eproto__INCLUDED