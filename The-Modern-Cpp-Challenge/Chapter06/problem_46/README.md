problem_46
===============

Circular buffer

Create a data structure that represents a circular buffer of a fixed size.   
A circular buffer overwrites existing elements when the buffer is being filled beyond its fixed size.   
The class you must write should:

- Prohibit default construction  
- Support the creation of objects with a specified size  
- Allow checking of the buffer capacity and status (empty(), full(), size(), capacity())  
- Add a new element, an operation that could potentially overwrite the oldest element in the buffer  
- Remove the oldest element from the buffer   
- Support iteration through its elements  


### Modern Style:  
none

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_46  
> 1 2 3 
> 2 3 4 5 6 
> 4 5 6 7 8 
>7 8 
> 9



