## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_60)

add_executable(problem_60 main.cpp)

set_target_properties (problem_60 PROPERTIES FOLDER "06.AlgorithmsDataStructures")

target_compile_options(problem_60  PUBLIC -std=c++14)
