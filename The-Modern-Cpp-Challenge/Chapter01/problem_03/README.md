problem_03  
===============

Least Common Multiple  

Write a program that will, given two or more positive integers, calculate and print the least common multiple of them all.  

LCM:  
https://en.wikipedia.org/wiki/Least_common_multiple  


### Algorithm  

gcd(a, b) * lcm(a,b)= a*b  


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_03  
> Input count:2  
> 4  
> 6  
> lcm=12  


### Another Solution with C++17
- lcm.cpp  
% make lcm 
% bin/lcm

### Rewrite in C  
- pro03.c  
% gcc pro03.c -o bin/pro03 
% bin/pro03    
