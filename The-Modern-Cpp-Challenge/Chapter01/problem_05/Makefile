### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall -Werror
TARGET=pro05
SRCS=pro05.c
 

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $< -o bin/$@ 


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/$(TARGET) *.o

