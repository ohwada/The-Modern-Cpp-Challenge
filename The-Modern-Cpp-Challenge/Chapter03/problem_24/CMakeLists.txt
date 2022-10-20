## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_24)

add_executable(problem_24 main.cpp)

set_target_properties (problem_24 PROPERTIES FOLDER "03.Strings")

target_compile_options(problem_24  PUBLIC -std=c++11)
