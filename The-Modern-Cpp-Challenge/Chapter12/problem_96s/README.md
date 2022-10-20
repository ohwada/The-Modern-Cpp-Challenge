problem_96s
===============

Client-server Fizz-Buzz : Server  

Write a client-server application that can be used for playing the Fizz-Buzz game.   
The client sends numbers to the server that answer back with fizz, buzz, fizz-buzz, or the number itself, according to the game rules. 
Communication between the client and the server must be done over TCP.   
The server should run indefinitely.   
The client should run as long as the user enters numbers between 1 and 99.
Fizz-Buzz is a game for children, intended to teach them arithmetic division.   
A player must say a number and another player should answer with:  

Fizz, if the number is divisible by 3
Buzz, if the number is divisible by 5
Fizz-buzz, if the number is divisible by both 3 and 5 The number itself in all other cases


Fizz Buzz
https://en.wikipedia.org/wiki/Fizz_buzz 


### Require
boost asio
https://www.boost.org/doc/libs/1_76_0/doc/html/boost_asio.html


### Modern Style:  
none

### Buid and Run: 
% make problem_96s

% bin/problem_96s  
> server running on port 11234


### Another Solution using POCO
- server
  