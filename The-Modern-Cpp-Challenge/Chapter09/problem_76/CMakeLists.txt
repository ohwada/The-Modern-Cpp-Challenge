## change log
## 2022-06-01 K.OHWADA
## std=c++17
## copy movies.json 

cmake_minimum_required (VERSION 3.7.0) 
project(problem_76)

include_directories(${INCLUDE_PATH}/)
include_directories(${LIBS_PATH}/nlohmannjson)

if(BOOST_OPTIONAL)
   include_directories(${BOOST_INCLUDE_DIR})
   link_directories(${BOOST_LIB_DIR})
   add_definitions(-DUSE_BOOST_OPTIONAL)
endif()

add_executable(problem_76 main.cpp)

set_target_properties (problem_76 PROPERTIES FOLDER "09.DataSerialization")

target_compile_options(problem_76  PUBLIC -std=c++17)

add_custom_command(TARGET problem_76 PRE_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy
                   ${PROJECT_SOURCE_DIR}/movies.json $<TARGET_FILE_DIR:problem_76>)

