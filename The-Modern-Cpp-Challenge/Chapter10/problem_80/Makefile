### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++17
ZIPLIB_FLAGS=`pkg-config --cflags --libs ziplib`
TARGET=problem_80
SRCS=main.cpp


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS) $(ZIPLIB_FLAGS) -o bin/$@ 
	cp -R test1 bin
	cp -R test2 bin
	cp sample1.zip bin
	cp sample2.zip bin


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o

