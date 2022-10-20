### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall -Werror
TARGET1=pro01
SRCS1=pro01.c
 TARGET2=fizzbuzz
 SRCS2=fizzbuzz.c


$(TARGET1): $(SRCS1)
	$(CC) $(CFLAGS) $< -o bin/$@ 


$(TARGET2): $(SRCS2)
	$(CC) $(CFLAGS) $< -o bin/$@ 


%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf  bin/$(TARGET1) bin/$(TARGET2) *.o

