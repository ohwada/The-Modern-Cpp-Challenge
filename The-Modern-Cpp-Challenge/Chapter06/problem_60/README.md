problem_60
===============

The Game of Life  

Write a program that implements the Game of Life cellular automaton proposed by John Horton Conway.   
The universe of this game is a grid of square cells that could have one of two states: dead or alive.   
Every cell interacts with its adjacent neighbors, with the following transactions occurring on every step:  

- Any live cell with fewer than two live neighbors dies, as if caused by under- population  
- Any live cell with two or three live neighbors lives on to the next generation   
- Any live cell with more than three live neighbors dies, as if by overpopulation  
- Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction  

The status of the game on each iteration should be displayed on the console, and for convenience, you should pick a reasonable size, such as 20 rows x 50 columns.

Conway's Game of Life  
https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life


### Modern Style:  
c ++ 14 std::chrono_literals;
https://en.cppreference.com/w/cpp/symbol_index/chrono_literals

c ++ 14 Automatic Return Type
https://www.modernescpp.com/index.php/automatic-return-type-c-11-14-20


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_60 


### Another Solution with wxWidgets
wxWidgets dome life
https://github.com/wxWidgets/wxWidgets/tree/master/demos/life

### Rewrite in C with ncurses 
- pro60  
% make pro60  
% bin/pro60  


