### 2022--01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++17
TARGET=list
SRCS=file_list.cpp



$(TARGET): $(SRCS)
	$(CXX) $< $(CFLAGS) -o bin/$@ 


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o

