## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_11)

add_executable(problem_11 main.cpp)

set_target_properties (problem_11 PROPERTIES FOLDER "01.Math")

target_compile_options(problem_11  PUBLIC -std=c++11)
