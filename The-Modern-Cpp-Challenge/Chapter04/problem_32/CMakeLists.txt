## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_32)

add_executable(problem_32 main.cpp)

set_target_properties (problem_32 PROPERTIES FOLDER "04.Streams")

target_compile_options(problem_32  PUBLIC -std=c++11)
