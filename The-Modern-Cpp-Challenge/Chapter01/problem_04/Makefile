### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -Werror -std=c++11
TARGET=prime
SRCS=prime.cpp
 

$(TARGET): $(SRCS)
	$(CXX) $(CFLAGS) $< -o bin/$@ 


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/$(TARGET) *.o

