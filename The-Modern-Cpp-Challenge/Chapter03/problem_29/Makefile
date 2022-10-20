### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall -Werror
TARGET=pro29
SRCS=pro29.c


$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $< -o bin/$@ 


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/$(TARGET) *.o

