problem_79
===============

Finding files in a ZIP archive

Write a program that can search for and print all the files in a ZIP archive whose name matches a user-provided regular expression (for instance, use ^.*\.jpg$ to find all files with the extension .jpg).


### Modern Style:  
 c++17 std::filesystem
https://en.cppreference.com/w/cpp/filesystem

### Require:  
ZipLib
https://github.com/frk1/ziplib

### Buid and Run:    
% make  problem_79  

% cd bin  
% ./problem_79  
> Archive path:sample79.zip  
> Pattern:^.*\.jpg$  
> Results:  
> einstein/albert einstein.jpg  
> einstein/einstein_nobel.jpg  
> hawking/Stephen_Hawking.StarChild.jpg  
> newton/Isaac_Newton.jpg  



