### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall -Werror
SQLITE_FLAGS=`pkg-config --cflags --libs sqlite3`
TARGET=pro85
SRCS=pro85.c


$(TARGET): $(SRCS)
	$(CC)  $< $(CFLAGS) $(SQLITE_FLAGS) -o bin/$@ 


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf  bin/$(TARGET) *.o

