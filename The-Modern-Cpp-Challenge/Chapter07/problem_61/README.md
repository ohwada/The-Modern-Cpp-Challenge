problem_61
===============

Parallel transform algorithm  

Write a general-purpose algorithm that applies a given unary function to transform the elements of a range in parallel.   
The unary operation used to transform the range must not invalidate range iterators or modify the elements of the range. The level of parallelism, that is, the number of execution threads and the way it is achieved, is an implementation detail.


### Modern Style:  
none

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_61 
> time: 286ms  
> time: 203ms  
> time: 160ms  

#