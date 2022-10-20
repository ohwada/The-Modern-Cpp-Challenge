## change log
## 2022-06-01 K.OHWADA
## set(LIBS_PATH ../../libs)
## std=c++17

cmake_minimum_required (VERSION 3.7.0) 
project(problem_75)

set(LIBS_PATH ../../libs)

include_directories(${LIBS_PATH}/nlohmannjson)
include_directories(${INCLUDE_PATH}/)

if(BOOST_OPTIONAL)
   include_directories(${BOOST_INCLUDE_DIR})
   link_directories(${BOOST_LIB_DIR})
   add_definitions(-DUSE_BOOST_OPTIONAL)
endif()

add_executable(problem_75 main.cpp)

set_target_properties (problem_75 PROPERTIES FOLDER "09.DataSerialization")

target_compile_options(problem_75  PUBLIC -std=c++17)
