## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_15)

add_executable(problem_15 main.cpp)

set_target_properties (problem_15 PROPERTIES FOLDER "02.Language")

target_compile_options(problem_15  PUBLIC -std=c++11)
