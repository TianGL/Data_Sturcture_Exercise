cmake_minimum_required(VERSION 3.8)
project(1_Fibonacci)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Fib.h fib.cpp)
add_executable(1_Fibonacci ${SOURCE_FILES})