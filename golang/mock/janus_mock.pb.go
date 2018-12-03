// Source: github.com/clustergarage/janus-proto/golang (interfaces: JanusdClient,Janusd_GetGuardStateClient)
package janus_mock

import (
	context "context"
	golang "github.com/clustergarage/janus-proto/golang"
	gomock "github.com/golang/mock/gomock"
	grpc "google.golang.org/grpc"
	metadata "google.golang.org/grpc/metadata"
	reflect "reflect"
)

// MockJanusdClient is a mock of JanusdClient interface
type MockJanusdClient struct {
	ctrl     *gomock.Controller
	recorder *MockJanusdClientMockRecorder
}

// MockJanusdClientMockRecorder is the mock recorder for MockJanusdClient
type MockJanusdClientMockRecorder struct {
	mock *MockJanusdClient
}

// NewMockJanusdClient creates a new mock instance
func NewMockJanusdClient(ctrl *gomock.Controller) *MockJanusdClient {
	mock := &MockJanusdClient{ctrl: ctrl}
	mock.recorder = &MockJanusdClientMockRecorder{mock}
	return mock
}

// EXPECT returns an object that allows the caller to indicate expected use
func (m *MockJanusdClient) EXPECT() *MockJanusdClientMockRecorder {
	return m.recorder
}

// CreateGuard mocks base method
func (m *MockJanusdClient) CreateGuard(arg0 context.Context, arg1 *golang.JanusdConfig, arg2 ...grpc.CallOption) (*golang.JanusdHandle, error) {
	varargs := []interface{}{arg0, arg1}
	for _, a := range arg2 {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "CreateGuard", varargs...)
	ret0, _ := ret[0].(*golang.JanusdHandle)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// CreateGuard indicates an expected call of CreateGuard
func (mr *MockJanusdClientMockRecorder) CreateGuard(arg0, arg1 interface{}, arg2 ...interface{}) *gomock.Call {
	varargs := append([]interface{}{arg0, arg1}, arg2...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "CreateGuard", reflect.TypeOf((*MockJanusdClient)(nil).CreateGuard), varargs...)
}

// DestroyGuard mocks base method
func (m *MockJanusdClient) DestroyGuard(arg0 context.Context, arg1 *golang.JanusdConfig, arg2 ...grpc.CallOption) (*golang.Empty, error) {
	varargs := []interface{}{arg0, arg1}
	for _, a := range arg2 {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "DestroyGuard", varargs...)
	ret0, _ := ret[0].(*golang.Empty)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// DestroyGuard indicates an expected call of DestroyGuard
func (mr *MockJanusdClientMockRecorder) DestroyGuard(arg0, arg1 interface{}, arg2 ...interface{}) *gomock.Call {
	varargs := append([]interface{}{arg0, arg1}, arg2...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "DestroyGuard", reflect.TypeOf((*MockJanusdClient)(nil).DestroyGuard), varargs...)
}

// GetGuardState mocks base method
func (m *MockJanusdClient) GetGuardState(arg0 context.Context, arg1 *golang.Empty, arg2 ...grpc.CallOption) (golang.Janusd_GetGuardStateClient, error) {
	varargs := []interface{}{arg0, arg1}
	for _, a := range arg2 {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "GetGuardState", varargs...)
	ret0, _ := ret[0].(golang.Janusd_GetGuardStateClient)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// GetGuardState indicates an expected call of GetGuardState
func (mr *MockJanusdClientMockRecorder) GetGuardState(arg0, arg1 interface{}, arg2 ...interface{}) *gomock.Call {
	varargs := append([]interface{}{arg0, arg1}, arg2...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "GetGuardState", reflect.TypeOf((*MockJanusdClient)(nil).GetGuardState), varargs...)
}

// MockJanusd_GetGuardStateClient is a mock of Janusd_GetGuardStateClient interface
type MockJanusd_GetGuardStateClient struct {
	ctrl     *gomock.Controller
	recorder *MockJanusd_GetGuardStateClientMockRecorder
}

// MockJanusd_GetGuardStateClientMockRecorder is the mock recorder for MockJanusd_GetGuardStateClient
type MockJanusd_GetGuardStateClientMockRecorder struct {
	mock *MockJanusd_GetGuardStateClient
}

// NewMockJanusd_GetGuardStateClient creates a new mock instance
func NewMockJanusd_GetGuardStateClient(ctrl *gomock.Controller) *MockJanusd_GetGuardStateClient {
	mock := &MockJanusd_GetGuardStateClient{ctrl: ctrl}
	mock.recorder = &MockJanusd_GetGuardStateClientMockRecorder{mock}
	return mock
}

// EXPECT returns an object that allows the caller to indicate expected use
func (m *MockJanusd_GetGuardStateClient) EXPECT() *MockJanusd_GetGuardStateClientMockRecorder {
	return m.recorder
}

// CloseSend mocks base method
func (m *MockJanusd_GetGuardStateClient) CloseSend() error {
	ret := m.ctrl.Call(m, "CloseSend")
	ret0, _ := ret[0].(error)
	return ret0
}

// CloseSend indicates an expected call of CloseSend
func (mr *MockJanusd_GetGuardStateClientMockRecorder) CloseSend() *gomock.Call {
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "CloseSend", reflect.TypeOf((*MockJanusd_GetGuardStateClient)(nil).CloseSend))
}

// Context mocks base method
func (m *MockJanusd_GetGuardStateClient) Context() context.Context {
	ret := m.ctrl.Call(m, "Context")
	ret0, _ := ret[0].(context.Context)
	return ret0
}

// Context indicates an expected call of Context
func (mr *MockJanusd_GetGuardStateClientMockRecorder) Context() *gomock.Call {
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Context", reflect.TypeOf((*MockJanusd_GetGuardStateClient)(nil).Context))
}

// Header mocks base method
func (m *MockJanusd_GetGuardStateClient) Header() (metadata.MD, error) {
	ret := m.ctrl.Call(m, "Header")
	ret0, _ := ret[0].(metadata.MD)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// Header indicates an expected call of Header
func (mr *MockJanusd_GetGuardStateClientMockRecorder) Header() *gomock.Call {
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Header", reflect.TypeOf((*MockJanusd_GetGuardStateClient)(nil).Header))
}

// Recv mocks base method
func (m *MockJanusd_GetGuardStateClient) Recv() (*golang.JanusdHandle, error) {
	ret := m.ctrl.Call(m, "Recv")
	ret0, _ := ret[0].(*golang.JanusdHandle)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// Recv indicates an expected call of Recv
func (mr *MockJanusd_GetGuardStateClientMockRecorder) Recv() *gomock.Call {
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Recv", reflect.TypeOf((*MockJanusd_GetGuardStateClient)(nil).Recv))
}

// RecvMsg mocks base method
func (m *MockJanusd_GetGuardStateClient) RecvMsg(arg0 interface{}) error {
	ret := m.ctrl.Call(m, "RecvMsg", arg0)
	ret0, _ := ret[0].(error)
	return ret0
}

// RecvMsg indicates an expected call of RecvMsg
func (mr *MockJanusd_GetGuardStateClientMockRecorder) RecvMsg(arg0 interface{}) *gomock.Call {
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "RecvMsg", reflect.TypeOf((*MockJanusd_GetGuardStateClient)(nil).RecvMsg), arg0)
}

// SendMsg mocks base method
func (m *MockJanusd_GetGuardStateClient) SendMsg(arg0 interface{}) error {
	ret := m.ctrl.Call(m, "SendMsg", arg0)
	ret0, _ := ret[0].(error)
	return ret0
}

// SendMsg indicates an expected call of SendMsg
func (mr *MockJanusd_GetGuardStateClientMockRecorder) SendMsg(arg0 interface{}) *gomock.Call {
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "SendMsg", reflect.TypeOf((*MockJanusd_GetGuardStateClient)(nil).SendMsg), arg0)
}

// Trailer mocks base method
func (m *MockJanusd_GetGuardStateClient) Trailer() metadata.MD {
	ret := m.ctrl.Call(m, "Trailer")
	ret0, _ := ret[0].(metadata.MD)
	return ret0
}

// Trailer indicates an expected call of Trailer
func (mr *MockJanusd_GetGuardStateClientMockRecorder) Trailer() *gomock.Call {
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Trailer", reflect.TypeOf((*MockJanusd_GetGuardStateClient)(nil).Trailer))
}
