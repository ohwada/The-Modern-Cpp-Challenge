### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11
PNG_FLAGS=`pkg-config --cflags --libs pngwriter`
TARGET=problem_82
SRCS=main.cpp


$(TARGET): $(SRCS)
	$(CXX) $< $(CFLAGS)  $(PNG_FLAGS) -o bin/$@


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
