### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall
TARGET=pro27
SRCS=pro27.c
 

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $< -o bin/$@ 


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/* *.o

