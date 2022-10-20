### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11 
PNG_FLAGS=`pkg-config --cflags --libs pngwriter`
TARGET=sin
SRCS=sin_wave.cpp


$(TARGET): $(SRCS)
	$(CXX) $< $(CFLAGS)  $(PNG_FLAGS) -o bin/$@


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
