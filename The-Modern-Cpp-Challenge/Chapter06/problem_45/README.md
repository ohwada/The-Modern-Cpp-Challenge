problem_45
===============

Priority queue

Write a data structure that represents a priority queue that provides constant time lookup for the largest element, but has logarithmic time complexity for adding and removing elements.   
A queue inserts new elements at the end and removes elements from the top.   
By default, the queue should use operator< to compare elements, but it should be possible for the user to provide a comparison function object that returns true if the first argument is less than the second.   
The implementation must provide at least the following operations:

- push() to add a new element  
- pop() to remove the top element  
- top() to provide access to the top element  
- size() to indicate the number of elements in the queue   
- empty() to indicate whether the queue is empty  


### Modern Style:  
none

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_45  
> 21 13 8 5 3 1 1 


