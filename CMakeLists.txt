cmake_minimum_required(VERSION 3.12)
project(histogram)

set(CMAKE_CXX_STANDARD 17)

add_executable(histogram src/histogram.cpp src/histogram.h test/print_test.cpp)