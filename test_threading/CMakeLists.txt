cmake_minimum_required(VERSION 3.3)
project(test_threading)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c89")

set(SOURCE_FILES test_struct.c)
add_executable(test_threading ${SOURCE_FILES})