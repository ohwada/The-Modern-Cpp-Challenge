### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall
 PNG_FLAGS=`pkg-config --cflags --libs libpng`
TARGET=pro84
SRCS=pro84.c 


$(TARGET): $(SRCS)
	$(CC) $(SRCS) $(CFLAGS)  $(PNG_FLAGS) -o bin/$@


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
