cmake_minimum_required(VERSION 3.2)
project(GoogleV8HelloWorld)

include_directories(/Work/v8work/v8parent/v8)

link_directories(
    /Work/v8work/v8parent/v8/xcodebuild/Release
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

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libstdc++")

set(SOURCE_FILES
../../src/main.cpp)

add_executable(GoogleV8HelloWorld ${SOURCE_FILES} ../../src/MyAllocator.cpp ../../src/MyAllocator.h)