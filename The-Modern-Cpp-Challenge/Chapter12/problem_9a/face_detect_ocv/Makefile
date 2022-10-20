### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -std=c++11
OCV_FLAGS=`pkg-config --cflags --libs opencv4` 

TARGET=face
SRCS=face_detect.cpp


$(TARGET):  $(SRCS)
	$(CXX)  $<  $(CFLAGS) $(OCV_FLAGS) -o bin/$@
	cp -R res bin


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf  bin/* *.o 
