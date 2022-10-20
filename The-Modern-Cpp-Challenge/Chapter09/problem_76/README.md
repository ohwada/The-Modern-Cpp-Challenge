problem_76
===============

Deserializing data from JSON  

Consider a JSON file with a list of movies as shown in the previous problem.   
Write a program that can deserialize its content.


### Modern Style:  
c++17 std::optional
https://en.cppreference.com/w/cpp/utility/optional

### Require:  
nlohmann-json  
https://github.com/nlohmann/json  

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_76


### Rewrite in C with json-c
- pro76.c  
% make pro76 
% bin/pro76  
 