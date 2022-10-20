problem_64
===============

Parallel sort algorithm  

Write a parallel version of the sort algorithm as defined for problem 53. Sort Algorithm,  
in Chapter 6, Algorithms and Data Structures, which, given a pair of random access iterators to define its lower and upper bounds, sorts the elements of the range using the quicksort algorithm. The function should use the comparison operators for comparing the elements of the range.   
The level of parallelism and the way to achieve it is an implementation detail.


### Modern Style: 
c++11 std::async
 https://en.cppreference.com/w/cpp/thread/async


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_64 
> sorting...  
> time: 11007ms  
> time: 4779ms  

