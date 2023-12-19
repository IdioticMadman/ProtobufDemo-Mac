cmake_minimum_required(VERSION 3.26)
project(protobufDemo)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(third_party/protobuf)

add_executable(protobufDemo main.cpp proto/base.pb.cc)

# 包含protobuf的头文件路径
target_include_directories(protobufDemo PRIVATE protobuf::libprotobuf)

# 链接protobuf库
target_link_libraries(protobufDemo PRIVATE protobuf::libprotobuf)

