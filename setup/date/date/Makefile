### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11
 
LIBS=../../../The-Modern-Cpp-Challenge/libs
DATE_FLAGS=-I${LIBS}/date/include/date

TARGET=today 
SRCS=today.cpp


$(TARGET): $(SRCS)
	$(CXX) $< $(CFLAGS) $(DATE_FLAGS) -o bin/$@ 


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/* *.o

