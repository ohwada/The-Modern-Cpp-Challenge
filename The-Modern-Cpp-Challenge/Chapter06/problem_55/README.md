problem_55
===============

Zip algorithm  

Write a function that, given two ranges, returns a new range with pairs of elements from the two ranges.   
Should the two ranges have different sizes, the result must contain as many elements as the smallest of the input ranges.   For example,   
if the input ranges were { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } and { 1, 1, 3, 5, 8, 13, 21 },   
the result should be {{1,1}, {2,1}, {3,3}, {4,5}, {5,8}, {6,13}, {7,21}}.

ZIP (file format)
https://en.wikipedia.org/wiki/ZIP_(file_format)


### Modern Style:  
cnone

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_55 
> {1,1}  
> {2,1}  
> {3,3}  

