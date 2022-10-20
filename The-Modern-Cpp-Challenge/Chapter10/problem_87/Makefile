### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++17
MODERN_FLAGS=`pkg-config --cflags --libs sqlite_modern_cpp`
TARGET=problem_87
SRCS=main.cpp 


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS)  $(MODERN_FLAGS) -o bin/$@
	cp cppchallenger87.db bin
	cp -R res bin


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
