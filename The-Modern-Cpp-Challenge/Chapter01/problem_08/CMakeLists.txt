## change log
## 2022-06-01 K.OHWADA
## std=c++17

cmake_minimum_required (VERSION 3.7.0) 
project(problem_08)

add_executable(problem_08 main.cpp)

set_target_properties (problem_08 PROPERTIES FOLDER "01.Math")

target_compile_options(problem_08  PUBLIC -std=c++17)
