problem_81
===============

Compressing and decompressing files to/from a ZIP archive with a password  

Write a program that can do the following:

- Compress either a file or the contents of a user-specified directory, recursively, to a password-protected ZIP archive  

- Decompress the content of a password-protected ZIP archive to a user-specified destination directory


### Modern Style:  
 c++17 std::filesystem
https://en.cppreference.com/w/cpp/filesystem

### Require:  
ZipLib
https://github.com/frk1/ziplib


Note:  
passwd.zip  
password is 1234  


### Buid and Run:    
% make  problem_81  

% cd bin  
% ./problem_81  
> Select [c]ompress/[d]ecompress?c
> Enter file or dir to compress:test
> Enter archive path:test1.zip
> Enter password:1234
> Compressing test/sample1.txt
> Compressing test/sample2.txt
> Compressing test/sample3.txt

### TODO  
unzipping the compressed file is empty


