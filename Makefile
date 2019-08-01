IDIR = asn1c
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=./
#LDIR =../lib

#LIBS=-lm

_DEPS = 3gpp_types.h amf_context.h ngap_asn1c.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = ngap_test.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ngap_test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o 