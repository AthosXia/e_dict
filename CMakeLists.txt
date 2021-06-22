cmake_minimum_required(VERSION 3.19)
project(e_dict)

set(CMAKE_CXX_STANDARD 98)

add_executable(e_dict main.cpp word.h file.h file.cpp word.cpp)