cmake_minimum_required(VERSION 3.3)
project(mpich)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c89")

set(SOURCE_FILES main.c)
add_executable(mpich ${SOURCE_FILES})