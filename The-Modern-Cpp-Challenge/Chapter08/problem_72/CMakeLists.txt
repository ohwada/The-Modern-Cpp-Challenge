## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_72)

add_executable(problem_72 main.cpp)

set_target_properties (problem_72 PROPERTIES FOLDER "08.DesignPatterns")

target_compile_options(problem_72  PUBLIC -std=c++11)
