cmake_minimum_required (VERSION 3.9)
project (example_project CUDA CXX)

add_library(example_library SHARED example_library/example.h example_library/example.cu example_library/example.cpp)