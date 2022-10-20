pngriter
===============

pngwriter:  
C++ library for creating PNG images
https://github.com/pngwriter/pngwriter

### Require  
-  libpng  
- freetype  

### Install
(1) download lastest souce files  
% git clone https://github.com/pngwriter/pngwriter

Note:
compile error with libs/PNGWriter

(2) create shared libraly (libpngwriter.a) 
build with self-made Makefile
copy Makefile to downloaded directory (pngwriter)  
% mkdir lib  
% make  

Note:
error occurs in the shared library 
built with the enclosed CMakeLists.txt

(3) copy header files and lib files to system area 
(eg /usr/local/opt/pngriter)
copy setup_lib.sh to downloaded directory
% bash setup_lib.sh

(4) copy config file (pngwriter.pc) to system area 
% bash setup_pkgconfig.sh
% pkg-config --cflags --libs pngwriter


