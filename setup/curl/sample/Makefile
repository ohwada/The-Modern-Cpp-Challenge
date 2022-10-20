### 2022-06-01 K.OHWADA

CC=gcc
CFLAGS=-Wall
 CURL_FLAGS=`pkg-config --cflags --libs libcurl` 

TARGET=http
SRCS=http_client.c


$(TARGET): $(SRCS)
	$(CC) $< $(CFLAGS)  $(CURL_FLAGS)  $ -o bin/$@


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf bin/*  *.o 
