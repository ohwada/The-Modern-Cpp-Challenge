### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++14

 CURLCPP_FLAGS=`pkg-config --cflags --libs curlcpp` 
TARGET=problem_99
SRCS=main.cpp


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS)  $(CURLCPP_FLAGS)  $(LIBCURL_FLAGS) -o bin/$@


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
