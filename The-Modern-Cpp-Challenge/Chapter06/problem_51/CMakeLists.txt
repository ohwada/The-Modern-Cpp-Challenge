## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_51)

add_executable(problem_51 main.cpp)

set_target_properties (problem_51 PROPERTIES FOLDER "06.AlgorithmsDataStructures")

target_compile_options(problem_51  PUBLIC -std=c++14)

