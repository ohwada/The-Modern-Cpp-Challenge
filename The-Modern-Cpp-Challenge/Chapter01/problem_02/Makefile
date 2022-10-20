### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -Werror -std=c++17
TARGET=gcd
SRCS=gcd.cpp


$(TARGET): $(SRCS)
	$(CXX) $(CFLAGS) $< -o bin/$@ 


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf $(TARGET) *.o

