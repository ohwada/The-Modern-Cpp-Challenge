problem_87
===============

Handling movie images in an SQLite database  

Modify the program written for the previous problem to support adding media files (such as images, but also videos) to a movie.   
These files must be stored in a separate table in the database and have a unique numerical identifier, the movie identifier, a name (typically the filename), an optional description, and the actual media content, stored as a blob.   
The following is a diagram with the structure of the table that must be added to the existing database:

### Modern Style:  
  c++17 std::filesystem
https://en.cppreference.com/w/cpp/filesystem

### Require:  
SqliteModernCpp
https://github.com/SqliteModernCpp/sqlite_modern_cpp


sqlite 
https://sqlite.org/  


### Buid and Run:    
% make  problem_87 

% cd bin
% ./problem_87
> help
> find <title>                        finds a movie ID
> list <movieid>                      lists the images of a movie
> add <movieid>,<path>,<description>  adds a new image
> del <imageid>                       delete an image
> help                                shows available commands
> exit                                exists the application


