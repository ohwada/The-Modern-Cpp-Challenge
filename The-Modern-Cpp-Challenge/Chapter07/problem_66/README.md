problem_66
===============

Customer service system  

Write a program that simulates the way customers are served in an office.  
The office has three desks where customers can be served at the same time.   
Customers can enter the office at any time.   
They take a ticket with a service number from a ticketing machine and wait until their number is next for service at one of the desks.   
Customers are served in the order they entered the office, or more precisely, in the order given by their ticket.   
Every time a service desk finishes serving a customer, the next customer in order is served.   
The simulation should stop after a particular number of customers have been issued tickets and served.


### Modern Style: 
c++11 static_assert.
 https://en.cppreference.com/w/cpp/language/static_assert


### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_66  
> LOG: [+] new customer with ticket 100
> LOG: desk 3 open
> LOG: [-] desk 3 handling customer 100


