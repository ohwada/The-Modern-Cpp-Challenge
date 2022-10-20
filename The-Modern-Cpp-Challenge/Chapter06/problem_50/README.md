problem_50
===============

Filtering a list of phone numbers  

Write a function that, given a list of phone numbers, returns only the numbers that are from a specified country.   
The country is indicated by its phone country code, such as 44 for Great Britain.   
Phone numbers may start with the country code, a + followed by the country code, or have no country code.   
The ones from this last category must be ignored.


### Modern Style:  
c++14 generic lambdas
https://en.cppreference.com/w/cpp/language/lambda

c++14 std::cbegin
https://en.cppreference.com/w/cpp/iterator/begin

### Buid and Run:  
% cd build  
% cmake ..  
% make  

% ./problem_50 
> 44 7520 112233  
> +44 7555 123456  


