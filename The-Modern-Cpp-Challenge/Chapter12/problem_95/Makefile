### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11
LIBS_PATH=../../libs
ASIO_INC=${LIBS_PATH}/asio/include
ASIO_FLAGS=-I${ASIO_INC}
TARGET=problem_95
SRCS=main.cpp


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS)  $(ASIO_FLAGS) -o bin/$@


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
