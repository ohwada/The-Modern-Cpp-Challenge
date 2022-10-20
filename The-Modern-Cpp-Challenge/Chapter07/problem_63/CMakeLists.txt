## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_63)

add_executable(problem_63 main.cpp)

set_target_properties (problem_63 PROPERTIES FOLDER "07.Concurrency")

target_compile_options(problem_63  PUBLIC -std=c++14)
