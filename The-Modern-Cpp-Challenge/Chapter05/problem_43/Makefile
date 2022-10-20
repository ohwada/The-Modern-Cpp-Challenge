### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -Werror -std=c++11

DATE_PATH= ../../libs/date
DATE_FLAGS=-I$(DATE_PATH)/include/ -I$(DATE_PATH)/include/date/
CURL_FLAGS=`pkg-config --cflags --libs libcurl` 
TARGET=problem_43 
SRCS=main.cpp $(DATE_PATH)/src/tz.cpp 


all: $(TARGET) setup


$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CFLAGS) $(DATE_FLAGS) $(CURL_FLAGS)  -o bin/$@ 


%.o: %.c
	$(CXX) $(CFLAGS) -c -o $@ $<


setup:
	cp -R $(DATE_PATH)/tzdata ~/Downloads/


clean:
	rm -rf bin/$(TARGET) *.o

