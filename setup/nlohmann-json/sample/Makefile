### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11
TARGET=parse
SRCS=parse_string.cpp


$(TARGET): $(SRCS)
	$(CXX) $< $(CFLAGS) -o bin/$@


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/* *.o 
