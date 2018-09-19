cmake_minimum_required(VERSION 3.9)
project(RPN)

set(CMAKE_CXX_STANDARD 14)

add_executable(RPN main.cpp rpn.h priority.h rpn.cpp caculation.cpp append2rpn.cpp priority.cpp readnumber.cpp displayprogress.cpp)