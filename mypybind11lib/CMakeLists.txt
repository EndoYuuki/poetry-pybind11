cmake_minimum_required(VERSION 3.16)

project(mypybind11lib)

add_subdirectory(pybind11)

pybind11_add_module(mypybind11lib MODULE main.cpp)

target_compile_options(mypybind11lib PRIVATE -O2 -Wall)
target_compile_features(mypybind11lib PRIVATE cxx_std_17)
