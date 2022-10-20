### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++17


ZIPLIB_FLAGS=`pkg-config --cflags --libs ziplib`
TARGET=problem_79
SRCS=main.cpp


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS) $(ZIPLIB_FLAGS) -o bin/$@ 
	cp sample79.zip bin


%.o: %.c
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o

