## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_53)

add_executable(problem_53 main.cpp)

set_target_properties (problem_53 PROPERTIES FOLDER "06.AlgorithmsDataStructures")

target_compile_options(problem_53  PUBLIC -std=c++14)
