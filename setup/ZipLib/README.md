ZipLib
===============

ZipLib:  
C++ library for Zip archives
 https://github.com/frk1/ziplib

Enclosed librarirs:  
- bzip2 
- lzma 
- zlib 

### Install
(1) create shared liblary(libZipLib.a)
copy The-Modern-Cpp-Challenge/libs/ZipLib

% cd ZipLib  
% cd build  
% cmake ..  
% make  
> created libZipLib.a  


(2)copy header files and lib files to system area 
(eg /usr/local/opt/ZipLib)
% bash setup_lib.sh

(3) copy config file (ziplib.pc) to system area 
% bash setup_pkgconfig.sh
% pkg-config --cflags --libs ziplib

