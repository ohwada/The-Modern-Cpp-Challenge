## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_23)

add_executable(problem_23 main.cpp)

set_target_properties (problem_23 PROPERTIES FOLDER "03.Strings")

target_compile_options(problem_23  PUBLIC -std=c++14)

