problem_36
===============

Deleting files older than a given date

Write a function that, given the path to a directory and a duration, deletes all the entries (files or subdirectories) older than the specified duration, in a recursive manner.   
The duration can represent anything, such as days, hours, minutes, seconds, and so on, or a combination of that, such as one hour and twenty minutes.   
If the specified directory is itself older than the given duration, it should be deleted entirely.


### Modern Style:  
c++17  std::filesystem  
https://en.cppreference.com/w/cpp/filesystem  

c++14  std::chrono_literals  
https://en.cppreference.com/w/cpp/symbol_index/chrono_literals  


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_36  


