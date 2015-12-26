cmake_minimum_required(VERSION 3.3)
project(test_function)

# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu90 -pedantic")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=C++11")
set(SOURCE_FILES test.cpp)
add_executable(test_function ${SOURCE_FILES})