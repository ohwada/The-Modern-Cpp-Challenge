## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_31)

add_executable(problem_31 main.cpp)

set_target_properties (problem_31 PROPERTIES FOLDER "03.Strings")

target_compile_options(problem_31  PUBLIC -std=c++14)

