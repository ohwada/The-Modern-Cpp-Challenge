### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11

DATE_ROOT=../../../The-Modern-Cpp-Challenge/libs/date
DATE_FLAGS=-I${DATE_ROOT}/include
CURL_FLAGS=`pkg-config --cflags --libs libcurl` 

TARGET=localtime 
SRCS=localtime.cpp tz.cpp


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS) $(DATE_FLAGS) ${CURL_FLAGS} -o bin/$@ 


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


setup:
	cp -R ${DATE_ROOT}/tzdata  ~/Downloads/


clean:
	rm -rf bin/$(TARGET) *.o

