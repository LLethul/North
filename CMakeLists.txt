cmake_minimum_required(VERSION 3.27)
project(North)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES src/**.cpp)
include_directories(include)

add_executable(North ${SOURCES}
        include/token.h
        include/position.h
        include/util.h
        src/token.cpp
)
