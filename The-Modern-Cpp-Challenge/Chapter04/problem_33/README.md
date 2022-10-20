problem_33
===============

Tabular printing of a list of processes 

Suppose you have a snapshot of the list of all processes in a system. The information for each process includes name, identifier, status (which can be either running or suspended), account name (under which the process runs), memory size in bytes, and platform (which can be either 32-bit or 64-bit).   
Your task is to write a function that takes such a list of processes and prints them to the console alphabetically, in tabular format.   
All columns must be left-aligned, except for the memory column which must be right-aligned.   
The value of the memory size must be displayed in KB.   
The following is an example of the output of this function:
chrome.exe 1044 Running marius.bancila 25180 32-bit


### Modern Style:  
c++14  std::literals::string_literals  
https://en.cppreference.com/w/cpp/symbol_index/string_literals  


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_33  
> chrome.exe               1044    running     marius.bancila      24590 32-bit
> chrome.exe               10100   running     marius.bancila     222418 32-bit


### Rewrite in C
- pro33 
% make pro33  
% bin/pro33

