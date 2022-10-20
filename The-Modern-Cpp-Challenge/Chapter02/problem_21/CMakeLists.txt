## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_21)

add_executable(problem_21 main.cpp)

set_target_properties (problem_21 PROPERTIES FOLDER "02.Language")

target_compile_options(problem_21  PUBLIC -std=c++11)

