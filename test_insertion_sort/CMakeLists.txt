cmake_minimum_required(VERSION 3.3)
project(test_insertion_sort)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -pedantic")

set(SOURCE_FILES insertion_sort.c)
add_executable(test_insertion_sort ${SOURCE_FILES})