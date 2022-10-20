## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_64)

add_executable(problem_64 main.cpp)

set_target_properties (problem_64 PROPERTIES FOLDER "07.Concurrency")

target_compile_options(problem_64  PUBLIC -std=c++11)
