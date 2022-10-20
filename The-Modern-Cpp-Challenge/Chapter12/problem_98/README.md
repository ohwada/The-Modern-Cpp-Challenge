problem_98
===============

Fetching emails using IMAP  

Write a program that can get information from an email server using IMAP.   
The program should be able to:  
Get a list of folders from the mailbox  
Get unread emails from a particular folder  


### Require
- curlcpp  
 https://github.com/JosephP91/curlcpp

IMAP Server  
Note;
cannot use password authentication with Gmail  


### Modern Style:  
none

### Buid and Run: 
% make problem_98

% bin/problem_98  
> OK [UNSEEN 14] First unseen
> ERROR: Remote file not found 

