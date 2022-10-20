problem_73
===============

Serializing and deserializing data to/from XML  

Write a program that can serialize a list of movies to an XML file, and deserialize an XML file with a list of movies.   
Each movie has a numerical identifier, title, release year, length in minutes, a list of directors, a list of writers, and a list of casting roles with actor name and character name.   


### Modern Style:  
c++17 std::optional
https://en.cppreference.com/w/cpp/utility/optional


### Require:  
- pugixml  
https://pugixml.org/ 

### Buid and Run:  
% make  problem_73  

% bin/problem_73 


### Rewrite in C with expat
- pro73.c  
% gcc pro73.c  -lexpat -o bin/pro73 
% bin/pro73  
