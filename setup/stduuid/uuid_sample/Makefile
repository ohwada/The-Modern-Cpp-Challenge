## 2022-06-01 K.OHWADA
## different implementations on Ubintu and Mac

ifeq ($(shell uname),Linux)
LIBS=-luuid
endif

CC=gcc
CFLAGS=-Wall 

TARGET=gen
SRCS=gen_uuid.c  


$(TARGET): $(SRCS)
	$(CC) $< $(CFLAGS) $(LIBS) -o bin/$@ 


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o

