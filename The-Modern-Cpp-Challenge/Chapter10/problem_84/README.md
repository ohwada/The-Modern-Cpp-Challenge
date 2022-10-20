problem_84
===============

EAN-13 barcode generator  

Write a program that can generate a PNG image with an EAN-13 barcode for any international article number in version 13 of the standard.   
For simplicity, the image should only contain the barcode and can skip the EAN-13 number printed under the barcode.   
Here is an example of the expected output for the number 5901234123457:  


### Modern Style:  
 none

### Require:  
pngwriter  
 https://github.com/pngwriter/pngwriter

### Buid and Run:    
% make  problem_84  

% cd bin  
% ./problem_84  
> created 5901234123457.png  


### Rewrite in C with libpng
pro84c  
 
