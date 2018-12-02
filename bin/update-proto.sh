#!/bin/bash

protoc -I. janus.proto --go_out=plugins=grpc:golang
protoc -I. janus.proto --grpc_out=c++ --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`
protoc -I. janus.proto --cpp_out=c++
protoc -I. health.proto --grpc_out=c++ --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`
protoc -I. health.proto --cpp_out=c++
