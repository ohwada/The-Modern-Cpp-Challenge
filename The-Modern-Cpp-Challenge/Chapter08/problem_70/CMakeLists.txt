## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_70)

add_executable(problem_70 main.cpp)

set_target_properties (problem_70 PROPERTIES FOLDER "08.DesignPatterns")

target_compile_options(problem_70  PUBLIC -std=c++14)
