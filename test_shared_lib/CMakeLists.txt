cmake_minimum_required(VERSION 3.2)
project(test_shared_lib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(test_shared_lib ${SOURCE_FILES} foo.h foo.c main.h main.c)