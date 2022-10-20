### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11
PDF_FLAGS=`pkg-config --cflags --libs pdfwriter`
TARGET=square
SRCS=square.cpp


$(TARGET): $(SRCS)
	$(CXX)  $< $(CFLAGS)  $(PDF_FLAGS) -o  bin/$@


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@


clean:
	rm -rf bin/* *.o 
