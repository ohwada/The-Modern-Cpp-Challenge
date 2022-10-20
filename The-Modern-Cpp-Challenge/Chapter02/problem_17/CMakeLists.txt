## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_17)

add_executable(problem_17 main.cpp)

set_target_properties (problem_17 PROPERTIES FOLDER "02.Language")

target_compile_options(problem_17  PUBLIC -std=c++14)

