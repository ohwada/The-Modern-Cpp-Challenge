## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_61)

add_executable(problem_61 main.cpp)

set_target_properties (problem_61 PROPERTIES FOLDER "07.Concurrency")

target_compile_options(problem_61  PUBLIC -std=c++11)
