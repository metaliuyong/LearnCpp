cmake_minimum_required(VERSION 3.17)
project(VirtualFunction)

set(CMAKE_CXX_STANDARD 20)

add_executable(VirtualFunction main.cpp Base.cpp Base.h Derive.cpp Derive.h)