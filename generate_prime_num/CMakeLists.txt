cmake_minimum_required(VERSION 3.2)
project(generate_prime_num)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(generate_prime_num ${SOURCE_FILES})