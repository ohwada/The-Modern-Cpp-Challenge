curlcpp
===============

curlcpp
an object oriented C++ wrapper for libcurl. 
https://github.com/JosephP91/curlcpp  

### Install
(1) download latest souce files  
git clone  https://github.com/JosephP91/curlcpp 

Note:  
compile error with libs/curlcpp  

(2) Create libcurlcpp.a  
cd curlcpp 
% mkdir build  
% cd build  
% cmake ..  
% make  

(3) copy header files and lib files to system area 
(eg /usr/local/opt/curlcpp)
copy setup_lib.sh to downloaded directory
% bash setup_lib.sh

(4) copy config file (curlcpp.pc) to system area 
% bash setup_pkgconfig.sh
% pkg-config --cflags --libs curlcpp

