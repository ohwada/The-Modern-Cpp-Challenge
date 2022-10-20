PDF-Writer
===============

PDF-Writer:  
High performance library for creating, modiyfing and parsing PDF files in C++
https://github.com/galkahana/PDF-Writer  

### Require  
-  libpng  
- libjpeg  
- libtiff  
- freetype  
- zlib  


### Install
(1) download lastest souce files  
git clone https://github.com/galkahana/PDF-Writer

Note:
compile error with libs/PDF-Writer

(2) Create libPDFWriter.a  
cd PDF-Writer  
% mkdir build  
% cd build  
% cmake ..  
% make  


(3) copy header files and lib files to system area 
(eg /usr/local/opt/PDFWriter)
copy setup_lib.sh to downloaded directory
% bash setup_lib.sh

(4) copy config file (pdfwriter.pc) to system area 
% bash setup_pkgconfig.sh
% pkg-config --cflags --libs pdfwriter

