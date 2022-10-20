problem_56
===============

Select algorithm  

Write a function that, given a range of values and a projection function, transforms each value into a new one and returns a new range with the selected values.   
For instance, if you have a type book that has an id, title, and author, and have a range of such book values, it should be possible for the function to select only the title of the books.   Here is an example of how the function should be used:  

struct book {
      int         id;
      std::string title;
      std::string author;
};


### Modern Style:  
c++14 std::cbegin
https://en.cppreference.com/w/cpp/iterator/begin

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_56 
> The C++ Programming Language  
> Effective Modern C++  
> The Modern C++ Programming Cookbook  
