### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11
CRYPTOPP_FLAGS=`pkg-config --cflags --libs cryptopp`

TARGET=problem_91
SRCS=main.cpp


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS)  $(CRYPTOPP_FLAGS) -o bin/$@


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
