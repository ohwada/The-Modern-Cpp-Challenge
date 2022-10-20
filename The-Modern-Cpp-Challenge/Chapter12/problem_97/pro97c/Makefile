### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall

 CURL_FLAGS=`pkg-config --cflags --libs libcurl` 
 JSON_FLAGS=`pkg-config --cflags --libs json-c`

TARGET=pro97
SRCS=bitcoin.c


$(TARGET): $(SRCS)
	$(CC) $(SRCS) $(CFLAGS)  $(CURL_FLAGS) $(JSON_FLAGS)  $ -o bin/$@


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
