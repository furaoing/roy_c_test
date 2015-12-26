cmake_minimum_required(VERSION 3.2)
project(ICTCLAS2015)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c89")

set(SOURCE_FILES main.cpp)
add_executable(ICTCLAS2015 ${SOURCE_FILES})