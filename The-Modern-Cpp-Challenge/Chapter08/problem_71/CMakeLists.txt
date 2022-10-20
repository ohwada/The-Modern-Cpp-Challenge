## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_71)

add_executable(problem_71 main.cpp)

set_target_properties (problem_71 PROPERTIES FOLDER "08.DesignPatterns")

target_compile_options(problem_71  PUBLIC -std=c++11)
