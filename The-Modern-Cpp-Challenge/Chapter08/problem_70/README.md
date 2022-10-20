problem_70
===============

Approval system  

Write a program for a purchasing department of a company that allows employees to approve new purchases (or expenses). However, based on their position, each employee may only approve expenses up to a predefined limit.   
For instance, regular employees can approve expenses up to 1,000 currency units, team managers up to 10,000, and the department manager up to 100,000. Any expense greater than that must be explicitly approved by the company president.

### Modern Style:  
c++14 std::make_unique
https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/unique_ptr/make_unique.html

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_70 
> john smith approved expense 'magazins', cost=500  
> robert booth approved expense 'hotel accomodation', cost=5000  


