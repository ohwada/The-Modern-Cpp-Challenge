problem_77
===============

Printing a list of movies to a PDF  

Write a program that can print to a PDF file a list of movies in a tabular form, with the following requirements:
There must be a heading to the list with the content List of movies.   
This must appear only on the first page of the document.
For each movie, it should display the title, the release year, and the length.   
The title, followed by the release year in parentheses, must be left-aligned.   
The length, in hours and minutes (for example, 2:12), must be right-aligned.   
There must be a line above and below the movie listing on each page.


### Modern Style:  
c++17 std::optional
https://en.cppreference.com/w/cpp/utility/optional

### Require:  
PDF-Writer
 https://github.com/galkahana/PDF-Writer

### Buid and Run:  .  
% make  

% cd bin  
% ./problem_77  
> create movies.pdf  

