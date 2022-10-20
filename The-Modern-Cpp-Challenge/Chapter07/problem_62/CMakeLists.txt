## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_62)

add_executable(problem_62 main.cpp)

set_target_properties (problem_62 PROPERTIES FOLDER "07.Concurrency")

target_compile_options(problem_62  PUBLIC -std=c++14)
