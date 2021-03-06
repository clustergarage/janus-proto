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
    virtual ::grpc::Status CreateGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::janus::JanusdHandle* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>> AsyncCreateGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>>(AsyncCreateGuardRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>> PrepareAsyncCreateGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>>(PrepareAsyncCreateGuardRaw(context, request, cq));
    }
    virtual ::grpc::Status DestroyGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::janus::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>> AsyncDestroyGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>>(AsyncDestroyGuardRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>> PrepareAsyncDestroyGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>>(PrepareAsyncDestroyGuardRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::janus::JanusdHandle>> GetGuardState(::grpc::ClientContext* context, const ::janus::Empty& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::janus::JanusdHandle>>(GetGuardStateRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>> AsyncGetGuardState(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>>(AsyncGetGuardStateRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>> PrepareAsyncGetGuardState(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>>(PrepareAsyncGetGuardStateRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>* AsyncCreateGuardRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::janus::JanusdHandle>* PrepareAsyncCreateGuardRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>* AsyncDestroyGuardRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::janus::Empty>* PrepareAsyncDestroyGuardRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::janus::JanusdHandle>* GetGuardStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>* AsyncGetGuardStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::janus::JanusdHandle>* PrepareAsyncGetGuardStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CreateGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::janus::JanusdHandle* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>> AsyncCreateGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>>(AsyncCreateGuardRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>> PrepareAsyncCreateGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>>(PrepareAsyncCreateGuardRaw(context, request, cq));
    }
    ::grpc::Status DestroyGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::janus::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::Empty>> AsyncDestroyGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::Empty>>(AsyncDestroyGuardRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::Empty>> PrepareAsyncDestroyGuard(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::janus::Empty>>(PrepareAsyncDestroyGuardRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::janus::JanusdHandle>> GetGuardState(::grpc::ClientContext* context, const ::janus::Empty& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::janus::JanusdHandle>>(GetGuardStateRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::janus::JanusdHandle>> AsyncGetGuardState(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::janus::JanusdHandle>>(AsyncGetGuardStateRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::janus::JanusdHandle>> PrepareAsyncGetGuardState(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::janus::JanusdHandle>>(PrepareAsyncGetGuardStateRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>* AsyncCreateGuardRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::janus::JanusdHandle>* PrepareAsyncCreateGuardRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::janus::Empty>* AsyncDestroyGuardRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::janus::Empty>* PrepareAsyncDestroyGuardRaw(::grpc::ClientContext* context, const ::janus::JanusdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::janus::JanusdHandle>* GetGuardStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request) override;
    ::grpc::ClientAsyncReader< ::janus::JanusdHandle>* AsyncGetGuardStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::janus::JanusdHandle>* PrepareAsyncGetGuardStateRaw(::grpc::ClientContext* context, const ::janus::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CreateGuard_;
    const ::grpc::internal::RpcMethod rpcmethod_DestroyGuard_;
    const ::grpc::internal::RpcMethod rpcmethod_GetGuardState_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CreateGuard(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::JanusdHandle* response);
    virtual ::grpc::Status DestroyGuard(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::Empty* response);
    virtual ::grpc::Status GetGuardState(::grpc::ServerContext* context, const ::janus::Empty* request, ::grpc::ServerWriter< ::janus::JanusdHandle>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateGuard : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateGuard() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateGuard() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateGuard(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::JanusdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateGuard(::grpc::ServerContext* context, ::janus::JanusdConfig* request, ::grpc::ServerAsyncResponseWriter< ::janus::JanusdHandle>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DestroyGuard : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DestroyGuard() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_DestroyGuard() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DestroyGuard(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDestroyGuard(::grpc::ServerContext* context, ::janus::JanusdConfig* request, ::grpc::ServerAsyncResponseWriter< ::janus::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetGuardState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetGuardState() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetGuardState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGuardState(::grpc::ServerContext* context, const ::janus::Empty* request, ::grpc::ServerWriter< ::janus::JanusdHandle>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetGuardState(::grpc::ServerContext* context, ::janus::Empty* request, ::grpc::ServerAsyncWriter< ::janus::JanusdHandle>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(2, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateGuard<WithAsyncMethod_DestroyGuard<WithAsyncMethod_GetGuardState<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_CreateGuard : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateGuard() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateGuard() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateGuard(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::JanusdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DestroyGuard : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DestroyGuard() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_DestroyGuard() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DestroyGuard(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetGuardState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetGuardState() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetGuardState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGuardState(::grpc::ServerContext* context, const ::janus::Empty* request, ::grpc::ServerWriter< ::janus::JanusdHandle>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateGuard : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CreateGuard() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::janus::JanusdConfig, ::janus::JanusdHandle>(std::bind(&WithStreamedUnaryMethod_CreateGuard<BaseClass>::StreamedCreateGuard, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CreateGuard() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateGuard(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::JanusdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateGuard(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::janus::JanusdConfig,::janus::JanusdHandle>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DestroyGuard : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_DestroyGuard() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::janus::JanusdConfig, ::janus::Empty>(std::bind(&WithStreamedUnaryMethod_DestroyGuard<BaseClass>::StreamedDestroyGuard, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_DestroyGuard() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DestroyGuard(::grpc::ServerContext* context, const ::janus::JanusdConfig* request, ::janus::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDestroyGuard(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::janus::JanusdConfig,::janus::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateGuard<WithStreamedUnaryMethod_DestroyGuard<Service > > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_GetGuardState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_GetGuardState() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::SplitServerStreamingHandler< ::janus::Empty, ::janus::JanusdHandle>(std::bind(&WithSplitStreamingMethod_GetGuardState<BaseClass>::StreamedGetGuardState, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_GetGuardState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetGuardState(::grpc::ServerContext* context, const ::janus::Empty* request, ::grpc::ServerWriter< ::janus::JanusdHandle>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetGuardState(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::janus::Empty,::janus::JanusdHandle>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_GetGuardState<Service > SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateGuard<WithStreamedUnaryMethod_DestroyGuard<WithSplitStreamingMethod_GetGuardState<Service > > > StreamedService;
};

}  // namespace janus


#endif  // GRPC_janus_2eproto__INCLUDED
