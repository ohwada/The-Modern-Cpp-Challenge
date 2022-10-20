## 2022-06-01 K.OHWADA


CXX=g++
CFLAGS=-Wall -std=c++17
TARGET=problem_38
SRCS=main2.cpp


$(TARGET): $(SRCS)
	$(CXX) $< $(CFLAGS) -o bin/$@


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf  bin/*  *.o

