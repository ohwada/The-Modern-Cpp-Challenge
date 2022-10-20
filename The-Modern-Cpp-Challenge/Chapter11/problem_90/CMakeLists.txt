## change log
## 2022-06-01 K.OHWADA
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_90)

add_executable(problem_90 main.cpp)

set_target_properties (problem_90 PROPERTIES FOLDER "11.Cryptography")

target_compile_options(problem_90  PUBLIC -std=c++11)
