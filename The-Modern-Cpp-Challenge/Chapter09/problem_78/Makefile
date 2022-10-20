### 2022-06-01 K.OHWADA

CXX=g++
CFLAGS=-Wall -Werror -std=c++17
PDF_FLAGS=`pkg-config --cflags --libs pdfwriter`
TARGET=problem_78
SRCS=main.cpp
 

$(TARGET): $(SRCS)
	cp -R res bin
	$(CXX) $< $(CFLAGS) $(PDF_FLAGS) -o bin/$@ 


%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/$(TARGET) *.o

