## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_49)

add_executable(problem_49 main.cpp)

set_target_properties (problem_49 PROPERTIES FOLDER "06.AlgorithmsDataStructures")

target_compile_options(problem_49  PUBLIC -std=c++14)