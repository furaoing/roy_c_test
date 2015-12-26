cmake_minimum_required(VERSION 3.2)
project(test_extern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c89")

set(SOURCE_FILES null_character.c)
add_executable(test_extern ${SOURCE_FILES})