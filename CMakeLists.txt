cmake_minimum_required(VERSION 3.2)
project(HelloCPP)

include_directories(/Work/v8work/v8parent/v8)

link_directories(
    /Work/v8work/v8parent/v8/out/x64.release/obj.target/tools/gyp
    /Work/v8work/v8parent/v8/out/x64.release/obj.target/third_party/icu
)
link_libraries(
    v8_base
    v8_libbase
    v8_libplatform
    v8_nosnapshot
    v8_snapshot
    icudata
    icui18n
    icuuc
    pthread
    dl
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
/Work/v8work/v8parent/v8/out/x64.release/obj.target/icudata/third_party/icu/linux/icudtl_dat.o
/Work/v8work/v8parent/v8/out/x64.release/obj.target/v8_libplatform/src/libplatform/default-platform.o
main.cpp)

add_executable(HelloCPP ${SOURCE_FILES} MyAllocator.cpp MyAllocator.h)