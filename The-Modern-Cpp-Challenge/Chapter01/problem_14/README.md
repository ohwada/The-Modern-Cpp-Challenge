problem_14  
===============

Validating ISBNs    

Write a program that validates that 10-digit values entered by the user, as a string, represent valid ISBN-10 numbers.

 ISBN:  
https://en.wikipedia.org/wiki/ISBN  


### Modern Style:  
c++11 : lambda expressions

> [&w](int const total, char const c) {
> return total + w-- * (c - '0'); }


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_14  
> isbn:0306406152  
> valid: 1  


### Rewrite in C  
- pro10.c  
% make pro10  
% bin/pro10


