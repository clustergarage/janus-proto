# Proto file
get_filename_component(_JANUS_PROTO "janus.proto" ABSOLUTE)
get_filename_component(_JANUS_PROTO_PATH "${_JANUS_PROTO}" PATH)

# Generated sources
set(_JANUS_PROTO_SRCS "${CMAKE_CURRENT_BINARY_DIR}/janus.pb.cc")
set(_JANUS_PROTO_HDRS "${CMAKE_CURRENT_BINARY_DIR}/janus.pb.h")
set(_JANUS_GRPC_SRCS "${CMAKE_CURRENT_BINARY_DIR}/janus.grpc.pb.cc")
set(_JANUS_GRPC_HDRS "${CMAKE_CURRENT_BINARY_DIR}/janus.grpc.pb.h")
add_custom_command(
  OUTPUT "${_JANUS_PROTO_SRCS}" "${_JANUS_PROTO_HDRS}" "${_JANUS_GRPC_SRCS}" "${_JANUS_GRPC_HDRS}"
  COMMAND ${_PROTOBUF_PROTOC}
  ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
    --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
    -I "${_JANUS_PROTO_PATH}"
    --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
    "${_JANUS_PROTO}"
  DEPENDS "${_JANUS_PROTO}"
)
