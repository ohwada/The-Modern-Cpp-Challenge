problem_38
===============

 Temporary log files

Create a logging class that writes text messages to a discardable text file. The text file should have a unique name and must be located in a temporary directory. Unless specified otherwise, this log file should be deleted when the instance of the class is destroyed. However, it should be possible to retain the log file by moving it to a permanent location.


### Changes:  
(1) added main2.cpp  
use <uuid/uuid.h>  instead of "uuid.h"  
(2) added Makefile  


### Modern Style:  
c++17  std::filesystem  
https://en.cppreference.com/w/cpp/filesystem  


### Buid and Run:  
% make roblem_38
% cd bin
% ./problem_38
> create lastlog.txt  


### Rewrite in C
- pro38c  

