## change log
## 2022-06-01 K.OHWADA
## std=c++17

cmake_minimum_required (VERSION 3.7.0) 
project(problem_37)

if(BOOST_FILESYSTEM)
   include_directories(${BOOST_INCLUDE_DIR})
   link_directories(${BOOST_LIB_DIR})
   add_definitions(-DUSE_BOOST_FILESYSTEM)
else()
   if(MSVC)
      add_definitions(-DFILESYSTEM_EXPERIMENTAL)
   endif()
endif()

add_executable(problem_37 main.cpp)

if(BOOST_FILESYSTEM)
   if(UNIX)
      find_package(Boost COMPONENTS system filesystem REQUIRED)
      
      target_link_libraries(problem_37 ${Boost_FILESYSTEM_LIBRARY}
                                       ${Boost_SYSTEM_LIBRARY})
   endif()
endif()

set_target_properties (problem_37 PROPERTIES FOLDER "04.Streams")

target_compile_options(problem_37  PUBLIC -std=c++17)
