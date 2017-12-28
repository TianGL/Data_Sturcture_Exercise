cmake_minimum_required(VERSION 3.8)
project(Chapter_1_unrun_code)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Fun1_7.cpp Fun1_12.cpp Fun1_14.cpp Fun1_13.cpp Fun1_15.cpp Fib.cpp Fib.h 1_23_Hanoi.cpp 1_25_gcdCN.cpp 1_26_shift2.cpp 1_27_Ackermann.cpp)
add_executable(Chapter_1_unrun_code ${SOURCE_FILES} Fun1_7.cpp Fun1_12.cpp Fun1_14.cpp Fun1_15.cpp Fib.cpp Fib.h)