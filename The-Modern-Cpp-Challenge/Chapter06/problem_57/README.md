problem_57
===============

Sort algorithm  

Write a function that, given a pair of random-access iterators to define its lower and upper bounds, sorts the elements of the range using the quicksort algorithm.   
There should be two overloads of the sort function: one that uses operator< to compare the elements of the range and put them in ascending order, and one that uses a user-defined binary comparison function for comparing the elements.

Quicksort
https://en.wikipedia.org/wiki/Quicksort


### Modern Style:  
c++14 std::greater_equal<void>
https://en.cppreference.com/w/cpp/utility/functional/greater_equal


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_57 
> 1 2 3 4 5 6 7 8 9   

### Rewrite in C
- pro57  
% make pro57  
% bin/pro57  
