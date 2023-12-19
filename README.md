# ProtoBufDemo For Mac
1. 先构建protoc工具，构建出可以把pb文件转换成源码文件
```shell
cmake -DCMAKE_BUILD_TYPE=Release  -Dprotobuf_BUILD_TESTS=OFF \
-Dprotobuf_BUILD_SHARED_LIBS=OFF -DCMAKE_CXX_STANDARD=17 \
-B build/mac \
-Dprotobuf_BUILD_PROTOC_BINARIES=ON \
-DCMAKE_INSTALL_PREFIX=install/mac
```
2. 添加protobuf源码至当前项目
```cmake
add_subdirectory(third_party/protobuf)
# 包含protobuf的头文件路径
target_include_directories(protobufDemo PRIVATE protobuf::libprotobuf)

# 链接protobuf库
target_link_libraries(protobufDemo PRIVATE protobuf::libprotobuf)
```
3. 正常编写代码了