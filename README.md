# janus-proto

## Build

```
# build golang definitions
protoc -I. janus.proto --go_out=plugins=grpc:golang

# build c++ definitions
protoc -I. janus.proto --grpc_out=c++ --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`
protoc -I. janus.proto --cpp_out=c++

# [optional] build c++ health definitions; golang has these readily available
protoc -I. health.proto --grpc_out=c++ --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`
protoc -I. health.proto --cpp_out=c++
```

### Generates

* `janus.pb.h` - the header which declares your generated message classes
* `janus.pb.cc` - which contains the implementation of your message classes
* `janus.grpc.pb.h` - the header which declares your generated service classes
* `janus.grpc.pb.cc` - which contains the implementation of your service classes

## Generate Mocks

```
mockgen github.com/clustergarage/janus-proto/golang \
  JanusdClient,Janusd_GetGuardStateClient > \
  golang/mock/janus_mock.pb.go
```
