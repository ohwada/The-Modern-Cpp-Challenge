problem_71
===============

Observable vector container  

Write a class template that behaves like a vector but can notify registered parties of internal state changes.   
The class must provide at least the following operations:  
Various constructors for creating new instances of the class 

- operator= to assign values to the container  

- push_back() to add a new element at the end of the container   

- pop_back() to remove the last element from the container   

- clear() to remove all the elements from the container  

- size() to return the number of elements from the container   

- empty() to indicate whether the container is empty or has elements  


### Modern Style:  
none


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_71 
> action: add, indexes: 0   
> action: add, indexes: 1   
> action: remove, indexes: 2  

