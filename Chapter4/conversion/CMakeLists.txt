cmake_minimum_required(VERSION 3.9)
project(conversion)

set(CMAKE_CXX_STANDARD 14)

add_executable(conversion main.cpp convert.h convert.cpp convertB.cpp)