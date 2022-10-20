## change log
## 2022-06-01 K.OHWADA
## set(LIBS_PATH ../../libs)
## std=c++11

cmake_minimum_required (VERSION 3.7.0) 
project(problem_41)

set(LIBS_PATH ../../libs)

include_directories(${LIBS_PATH}/date/include/date)

add_executable(problem_41 main.cpp)

set_target_properties (problem_41 PROPERTIES FOLDER "05.Datetime")

target_compile_options(problem_41  PUBLIC -std=c++11)
