cmake_minimum_required(VERSION 3.9)
project(laby)

set(CMAKE_CXX_STANDARD 14)

add_executable(laby main.cpp Cell.h neighbor.h advance.h displayLaby.h laby.h randLaby.h readLaby.h)