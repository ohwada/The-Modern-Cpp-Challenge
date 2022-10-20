### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall
TARGET=pro41
SRCS=pro41.c


$(TARGET): $(SRCS)
	$(CC) $< $(CFLAGS)  -o bin/$@ 


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/* *.o

