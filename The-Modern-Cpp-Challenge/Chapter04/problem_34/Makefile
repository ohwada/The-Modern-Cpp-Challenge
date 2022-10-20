### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall -Werror
TARGET=pro34
SRCS=pro34.c


$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $< -o bin/$@ 
	cp sample34.txt bin


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/$(TARGET) *.o

