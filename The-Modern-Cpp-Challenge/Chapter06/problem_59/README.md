problem_59
===============

The Weasel program

Write a program that implements Richard Dawkins' weasel computer simulation, described in Dawkins' words as follows (The Blind Watchmaker, chapter 3):  
We again use our computer monkey, but with a crucial difference in its program.   
It again begins by choosing a random sequence of 28 letters, just as before ... it duplicates it repeatedly, but with a certain chance of random error – 'mutation' – in the copying.   
The computer examines the mutant nonsense phrases, the 'progeny' of the original phrase, and chooses the one which, however slightly, most resembles the target phrase,   METHINKS IT IS LIKE A WEASEL.

Weasel program  
https://en.wikipedia.org/wiki/Weasel_program  

The Blind Watchmaker  
https://en.wikipedia.org/wiki/The_Blind_Watchmaker  


### Modern Style:  
none

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_59 
> 61   METHINKS IT IS LIKE A WEASEL

### Rewrite in C  
- pro59  
% make pro59  
% bin/pro59  
