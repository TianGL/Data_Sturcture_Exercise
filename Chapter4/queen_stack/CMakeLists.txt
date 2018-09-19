cmake_minimum_required(VERSION 3.9)
project(queen_stack)

set(CMAKE_CXX_STANDARD 14)

add_executable(queen_stack main.cpp queen_stack.h queen.h place_queens.cpp display_progress.cpp)