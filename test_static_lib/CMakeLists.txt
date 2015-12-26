cmake_minimum_required(VERSION 3.2)
project(test_static_lib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c89")

set(SOURCE_FILES hello.c)
add_executable(test_static_lib ${SOURCE_FILES} hello.h main.h main.c)