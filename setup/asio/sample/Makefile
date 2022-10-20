### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11
LIBS=../../../The-Modern-Cpp-Challenge/libs
ASIO_FLAGS=-I${LIBS}/asio/include


TARGET=ip_address
SRCS=ip_address.cpp


$(TARGET): $(SRCS)
	$(CXX) $< $(CFLAGS)  $(ASIO_FLAGS) -o bin/$@


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
