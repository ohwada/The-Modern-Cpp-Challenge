problem_80
===============

Compressing and decompressing files to/from a ZIP archive  

Write a program that can do the following:

- Compress either a file or the contents of a user-specified directory, recursively, to a ZIP archive  

- Decompress the contents of a ZIP archive to a user-specified destination directory


### Modern Style:  
 c++17 std::filesystem
https://en.cppreference.com/w/cpp/filesystem

### Require:  
ZipLib
https://github.com/frk1/ziplib

### Buid and Run:    
% make  problem_80  

% cd bin  
% ./problem_80  
> Select [c]ompress/[d]ecompress?c
> Enter file or dir to compress:test
> Enter archive path:test1.zip
> Compressing test/sample1.txt
> Compressing test/sample2.txt
> Compressing test/sample3.txt


### Rewrite in C  with libzip
- pro80c  



