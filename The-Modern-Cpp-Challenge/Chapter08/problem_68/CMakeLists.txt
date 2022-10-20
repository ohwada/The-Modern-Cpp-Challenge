## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_68)

add_executable(problem_68 main.cpp)

set_target_properties (problem_68 PROPERTIES FOLDER "08.DesignPatterns")

target_compile_options(problem_68  PUBLIC -std=c++14)
