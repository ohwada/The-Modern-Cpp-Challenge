### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -Werror -std=c++17
MODERN_FLAGS=`pkg-config --cflags --libs sqlite_modern_cpp`
TARGET=problem_85
SRCS=main.cpp 


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS)  $(MODERN_FLAGS) -o bin/$@


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/* *.o 
