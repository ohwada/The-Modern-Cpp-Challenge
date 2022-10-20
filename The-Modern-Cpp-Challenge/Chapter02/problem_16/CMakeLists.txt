## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_16)

add_executable(problem_16 main.cpp)

set_target_properties (problem_16 PROPERTIES FOLDER "02.Language")

target_compile_options(problem_16  PUBLIC -std=c++11)
