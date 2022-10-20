problem_43
===============

Meeting time for multiple time zones

Write a function that, given a list of meeting participants and their time zones, displays the local meeting time for each participant.


### Require: 
tz.cpp
https://howardhinnant.github.io/date/date.html  

libcurl
https://curl.se/

tzdata  
https://www.iana.org/time-zones  


### Modern Style:  
none


### Buid and Run:  
% make all
g++ main.cpp ../../libs/date/src/tz.cpp  -Wall -Werror -std=c++11 -I../../libs/date/include/ -I../../libs/date/include/date/ `pkg-config --cflags --libs libcurl`   -o bin/problem_43 

% bin/problem_43  
> Hour:1
> Minutes:2
> Local time:    2022-08-09 01:02:00 JST
> Ildiko         2022-08-08 18:02:00 CEST
> Jens           2022-08-08 18:02:00 CEST
> Jane           2022-08-08 12:02:00 EDT

### TODO
time is off by about 12 hours
It should be 13:00
displayed as 1:00

### Another Solution with cctz
cctz:  
https://github.com/google/cctz  

- meeting_time.cpp  
% g++ meeting_time.cpp -o bin/meeting   -std=c++11 `pkg-config --cflags --libs cctz` 
% bin/meeting  


