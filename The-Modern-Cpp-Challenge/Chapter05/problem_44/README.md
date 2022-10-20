problem_44
===============

Monthly calendar

Write a function that, given a year and month, prints to the console the month calendar.  
The expected output format is as follows 
(the example is for December 2017):

Mon Tue Wed Thu Fri Sat Sun
                             1   2     3 
   4    5    6    7     8     9  10
  11  12  13  14  15  16  17
  18  19  20  21  22  23  24 
  25  26  27  28  29  30  31


### Require: 
data.h  iso_week.h 
https://howardhinnant.github.io/date/date.html  


### Modern Style:  
none

### Buid and Run:  
% cmake  ..
% make

% bin/problem_44  
> Year:2017
> Month:12
> Mon Tue Wed Thu Fri Sat Sun
>                    1   2   3 
>  4    5    6     7   8   9  10 
> 11  12  13  14  15  16  17 
> 18  19  20  21  22  23  24 
> 25  26  27  28  29  30  31 


### Rewrite in C
- pro44  
% gcc pro44 -o bin/pro44
% bin/pro44


