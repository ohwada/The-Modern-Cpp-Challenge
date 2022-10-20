problem_78
===============

Creating a PDF from a collection of images  

Write a program that can create a PDF document that contains images from a user-specified directory.   
The images must be displayed one after another. If an image does not fit on the remainder of a page, it must be placed on the next page.  
The following is an example of such a PDF file, created from several images of Albert Einstein   
(these pictures are featured along with the source code accompanying the book):  


### Modern Style:  
 c++17 std::filesystem
https://en.cppreference.com/w/cpp/filesystem

### Require:  
PDF-Writer
 https://github.com/galkahana/PDF-Writer

### Buid and Run:    
% make  problem_78  

% cd bin  
% ./problem_78  
> created sample.pdf  

