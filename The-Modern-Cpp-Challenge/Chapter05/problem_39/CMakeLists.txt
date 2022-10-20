## change log
## 2022-06-01 K.OHWADA
## std=c++17

cmake_minimum_required (VERSION 3.7.0) 
project(problem_39)

add_executable(problem_39 main.cpp)

set_target_properties (problem_39 PROPERTIES FOLDER "05.Datetime")

target_compile_options(problem_39  PUBLIC -std=c++17)

