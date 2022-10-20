problem_47
===============

Double buffer

Write a class that represents a buffer that could be written and read at the same time without the two operations colliding. A read operation must provide access to the old data while a write operation is in progress. Newly written data must be available for reading upon completion of the write operation.


### Modern Style:  
c++14 std::cbegin
https://en.cppreference.com/w/cpp/iterator/begin


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_47  
> 0 0 0 0 0 0 0 0 0 0 
> 11 12 13 14 15 16 17 18 19 20 
> 21 22 23 24 25 26 27 28 29 30 

