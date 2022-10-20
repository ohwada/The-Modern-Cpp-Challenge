problem_18
===============

Minimum function with any number of arguments 

Write a function template that can take any number of arguments and returns the minimum value of them all, using operator < for comparison.   
Write a variant of this function template that can be parameterized with a binary comparison function to use instead of operator <.


### Modern Style:  
c++14  std::less<void> 
https://en.cppreference.com/w/cpp/utility/functional/less_void


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_18  
> 2
> 0

