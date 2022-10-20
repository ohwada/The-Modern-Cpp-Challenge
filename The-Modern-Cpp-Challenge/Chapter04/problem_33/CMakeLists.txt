## change log
## 2022-06-01 K.OHWADA
## std=c++14

cmake_minimum_required (VERSION 3.7.0) 
project(problem_33)

add_executable(problem_33 main.cpp)
                   
set_target_properties (problem_33 PROPERTIES FOLDER "04.Streams")

target_compile_options(problem_33  PUBLIC -std=c++14)

