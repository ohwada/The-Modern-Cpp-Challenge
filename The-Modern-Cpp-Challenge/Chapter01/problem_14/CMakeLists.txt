## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_14)

add_executable(problem_14 main.cpp)

set_target_properties (problem_14 PROPERTIES FOLDER "01.Math")

target_compile_options(problem_14  PUBLIC -std=c++11)

