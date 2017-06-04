cmake_minimum_required(VERSION 3.7)
project(STLbase)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Date.cpp Date.h Task.cpp Task.h)
add_executable(STLbase ${SOURCE_FILES})