cmake_minimum_required(VERSION 3.9)
project(Queue)

set(CMAKE_CXX_STANDARD 14)

add_executable(Queue main.cpp Queue.h Queue_test.h Queue_implementation.h)