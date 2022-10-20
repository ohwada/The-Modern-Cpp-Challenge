## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_28)

add_executable(problem_28 main.cpp)

set_target_properties (problem_28 PROPERTIES FOLDER "03.Strings")

target_compile_options(problem_28  PUBLIC -std=c++14)