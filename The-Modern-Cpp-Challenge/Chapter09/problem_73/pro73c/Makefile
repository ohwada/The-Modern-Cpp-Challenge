### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall -Werror
LIBS= -lexpat
TARGET=pro73
SRCS=pro73.c


$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(LIBS) $< -o bin/$@ 


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf  bin/$(TARGET) *.o

