problem_86
===============

Inserting movies into an SQLite database transactionally

Extended the program written for the previous problem so that it can add new movies to the database.   
The movies could be read from the console, or alternatively from a text file.   
The insertion of movie data into several tables in the database must be performed transactionally.


### Modern Style:  
 none

### Require:  
SqliteModernCpp
https://github.com/SqliteModernCpp/sqlite_modern_cpp


sqlite 
https://sqlite.org/  


### Buid and Run:    
% make  problem_86 

% cd bin
% ./problem_86 
> Enter movie  
> Title: abc  
> Year: 2020  
> Length: 80  
> Directors: taro  
> Writers: jiro  
> Cast: hanako  
> [4] abc (2020) 80min  
 > directed by: taro,  
 > written by: taro,  
 > cast: hanako (hanako),  
