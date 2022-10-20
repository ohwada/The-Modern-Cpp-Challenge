problem_20
===============

Container any, all, none

Write a set of general-purpose functions that enable checking whether any, all, or none of the specified arguments are present in a given container. 
These functions should make it possible to write code as follows:
 std::vector<int> v{ 1, 2, 3, 4, 5, 6 };  
  assert(contains_any(v, 0, 3, 30));  


### Modern Style:  
c++11 : List-initialization 
https://en.cppreference.com/w/cpp/language/list_initialization  


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_20 


