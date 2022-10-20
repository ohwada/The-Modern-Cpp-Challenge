### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -Werror -std=c++17
PUGI_FLAGS=`pkg-config --cflags --libs  pugixml` 
TARGET=problem_73
SRCS=main.cpp
 

$(TARGET): $(SRCS)
	$(CXX) $< $(CFLAGS) $(PUGI_FLAGS) -o bin/$@ 


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/$(TARGET) *.o

