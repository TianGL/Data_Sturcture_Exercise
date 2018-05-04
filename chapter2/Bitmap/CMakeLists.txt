cmake_minimum_required(VERSION 3.9)
project(Bitmap)

set(CMAKE_CXX_STANDARD 14)

add_executable(Bitmap main.cpp bitmap.h bitmap_o1_init.h bitmap_o1_init_set_only.h Eratosthenes.h)