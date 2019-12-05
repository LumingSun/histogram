cmake_minimum_required(VERSION 3.15)
project(histogram)

set(CMAKE_CXX_STANDARD 17)

add_executable(histogram main.cpp src/histogram.cpp src/histogram.h)