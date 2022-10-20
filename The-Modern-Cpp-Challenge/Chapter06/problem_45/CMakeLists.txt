## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_45)

add_executable(problem_45 main.cpp)

set_target_properties (problem_45 PROPERTIES FOLDER "06.AlgorithmsDataStructures")

target_compile_options(problem_45  PUBLIC -std=c++11)
