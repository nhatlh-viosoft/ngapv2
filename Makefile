SOURCE = ngap_test.c ngap_conv.c 3gpp_types.c asn1c/*.c  tool/pkbuf.c tool/mutex.c#tool/*.c

CC = gcc
CFLAGS = -I asn1c -I tool
CFLAGS += -pthread

.PHONY: clean
all: ngap_test

ngap_test: $(SOURCE)
	$(CC) -Wall -g -ggdb -o ngap_test $(SOURCE) $(CFLAGS)

clean:
	rm *.o