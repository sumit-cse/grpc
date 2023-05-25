cmake_minimum_required(VERSION 3.5.1)


project(slu_img_stream C CXX)
#set(OpenCV_DIR "/home/slu/opencv-2.4.13.5/build")
#find_package(OpenCV REQUIRED COMPONENTS core imgproc)
#find_package(OpenCV REQUIRED COMPONENTS core imgproc highgui)
#include_directories(${OpenCV_INCLUDE_DIRS})
include(../cmake/common.cmake)

# Proto file
get_filename_component(slu_img_stream_proto "/home/slu/grpc/slu/project/proto/slu_img_stream.proto" ABSOLUTE)
get_filename_component(slu_img_stream_proto_path "${slu_img_stream_proto}" PATH)

# Generated sources
set(slu_img_stream_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/slu_img_stream.pb.cc")
set(slu_img_stream_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/slu_img_stream.pb.h")
set(slu_img_stream_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/slu_img_stream.grpc.pb.cc")
set(slu_img_stream_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/slu_img_stream.grpc.pb.h")
add_custom_command(
      OUTPUT "${slu_img_stream_proto_srcs}" "${slu_img_stream_proto_hdrs}" "${slu_img_stream_grpc_srcs}" "${slu_img_stream_grpc_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${slu_img_stream_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${slu_img_stream_proto}"
      DEPENDS "${slu_img_stream_proto}")

# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# slu_img_stream_grpc_proto

#set(OpenCV_DIR "/home/slu/opencv4/build")
#find_package(OpenCV REQUIRED)
#find_package(Qt5 COMPONENTS Core Widgets Concurrent OpenGL Test REQUIRED)
#include_directories(${OpenCV_INCLUDE_DIRS})
set(CMAKE_EXE_LINKER_FLAGS "-lmvec -lm")
add_library(slu_img_stream_grpc_proto
  ${slu_img_stream_grpc_srcs}
  ${slu_img_stream_grpc_hdrs}
  ${slu_img_stream_proto_srcs}
  ${slu_img_stream_proto_hdrs})
add_compile_options("-lm")
link_libraries("-lm")
target_link_libraries(slu_img_stream_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF}
  ${CMAKE_EXE_LINKER_FLAGS})
#  ${OpenCV_LIBS})

# slu_img_stream_helper
set(CMAKE_EXE_LINKER_FLAGS "-lm")
set(OpenCV_DIR "/home/slu/opencv4/build")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
find_package(Qt5 COMPONENTS Core Widgets Concurrent OpenGL Test REQUIRED)
add_library(slu_img_stream_helper
  "helper.h"
  "helper.cc")
add_compile_options("-lm")
link_libraries("-lm")
target_link_libraries(slu_img_stream_helper
  slu_img_stream_grpc_proto
  ${OpenCV_LIBS}
  ${CMAKE_EXE_LINKER_FLAGS}
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

# Targets slu_img_stream_(client|server)
foreach(_target
  slu_img_stream_server)
  add_executable(${_target}
    "${_target}.cc")
  target_link_libraries(${_target}
    slu_img_stream_grpc_proto
    slu_img_stream_helper
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})
endforeach()
