## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_18)

add_executable(problem_18 main.cpp)

set_target_properties (problem_18 PROPERTIES FOLDER "02.Language")

target_compile_options(problem_18  PUBLIC -std=c++14)

