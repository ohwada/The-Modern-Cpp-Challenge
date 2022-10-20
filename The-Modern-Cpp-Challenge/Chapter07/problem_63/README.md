problem_63
===============

Parallel min and max element algorithms using asynchronous functions  

Implement general-purpose parallel algorithms that find the minimum value and, respectively, the maximum value in a given range.   
The parallelism should be implemented using asynchronous functions, although the number of concurrent functions is an implementation detail.


### Modern Style: 
c++14 generic lambdas
https://en.cppreference.com/w/cpp/language/lambda
 
c ++ 14 Automatic Return Type
https://www.modernescpp.com/index.php/automatic-return-type-c-11-14-20


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_63 
> minimum element
> seq time: 208ms
> par time: 107ms

