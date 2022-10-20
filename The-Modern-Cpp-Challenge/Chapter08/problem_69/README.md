problem_69
===============

Generating social security numbers  

Write a program that can generate social security numbers for two countries, Northeria and Southeria, that have different but similar formats for the numbers:

- In Northeria, the numbers have the format SYYYYMMDDNNNNNC, where S is a digit representing the sex, 9 for females and 7 for males, YYYYMMDD is the birth date, NNNNN is a five-digit random number, unique for a day (meaning that the same number can appear twice for two different dates, but not the same date), and C is a digit picked so that the checksum computed as described later is a multiple of 11.  

- In Southeria, the numbers have the format SYYYYMMDDNNNNC, where S is a digit representing the sex, 1 for females and 2 for males, YYYYMMDD is the birth date, NNNN is a four-digit random number, unique for a day, and C is a digit picked so that the checksum computed as described below is a multiple of 10.


### Modern Style:  
c++14 std::make_unique
https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/unique_ptr/make_unique.html

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_69 

