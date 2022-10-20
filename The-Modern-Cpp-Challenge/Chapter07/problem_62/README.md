problem_62
===============

Parallel min and max element algorithms using threads  

Implement general-purpose parallel algorithms that find the minimum value and, respectively, the maximum value in a given range.   
The parallelism should be implemented using threads, although the number of concurrent threads is an implementation detail.


### Modern Style: 
c++11 std::async
 https://en.cppreference.com/w/cpp/thread/async

c ++ 14 Automatic Return Type
https://www.modernescpp.com/index.php/automatic-return-type-c-11-14-20


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_62 
> minimum element  
> seq time: 211ms  
> par time: 111ms  

