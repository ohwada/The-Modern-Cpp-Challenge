## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_12)

add_executable(problem_12 main.cpp)

set_target_properties (problem_12 PROPERTIES FOLDER "01.Math")

target_compile_options(problem_12  PUBLIC -std=c++11)
