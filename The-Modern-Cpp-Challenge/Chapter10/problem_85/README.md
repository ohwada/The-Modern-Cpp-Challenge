problem_85
===============

Reading movies from an SQLite database  

Write a program that reads movies from an SQLite database and displays them on the console. Each movie must have a numerical identifier, a title, release year, length in minutes, list of directors, list of writers, and a cast that includes both the actor and the character names.   
The following is a diagram of the database that should be used for this purpose:  


### Modern Style:  
 none

### Require:  
SqliteModernCpp
https://github.com/SqliteModernCpp/sqlite_modern_cpp


sqlite 
https://sqlite.org/  


### Buid and Run:    
% make  problem_85 

% bin/problem_85 
> [1] The Matrix (1999) 196min  
 > directed by: Lana Wachowski,Lilly Wachowski,  
 > written by: Lana Wachowski,Lilly Wachowski,  
 > cast: Keanu Reeves (Neo),Laurence Fishburne (Morpheus),Carrie-Anne Moss (Trinity),Hugo Weaving (Agent Smith),  


### Rewrite in C with sqlite3
pro85.c  
% gcc pro85.c -o bin/pro85 `pkg-config --cflags --libs sqlite3`

