problem_94
===============

File signing  

Write a program that is able to sign files and verify that a signed file has not been tampered with, using RSA cryptography.   
When signing a file, the signature should be written to a separate file and used later for the verification process.   
The program should provide at least two functions: one that signs a file (taking as arguments the path to the file, the path to the RSA private key, and the path to the file where the signature will be written) and one that verifies a file (taking as arguments the path to the file, the path to the RSA public key, and the path to the signature file).


### Require
cryptopp
https://cryptopp.com/ 

### Modern Style:  
 c++17 std::filesystem
https://en.cppreference.com/w/cpp/filesystem


### Buid and Run: 
% make problem_94

% cd bin
% ./problem_94  
> create filrs  
> rsa-private.key  
> rsa-public.key  
> sample.sign  

