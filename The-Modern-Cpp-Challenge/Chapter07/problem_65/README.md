problem_65
===============

Thread-safe logging to the console  

Write a class that enables components running in different threads to safely print log messages to the console by synchronizing access to the standard output stream to guarantee the integrity of the output.   
This logging component should have a method called log() with a string argument representing the message to be printed to the console.


### Modern Style: 
c++11 static_assert.
 https://en.cppreference.com/w/cpp/language/static_assert


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_65 
> LOG: module 3 started
> LOG: module 1 started

