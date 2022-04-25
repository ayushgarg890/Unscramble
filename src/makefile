# you can put include files in this directory

IDIR =../include
CC=gcc
CFLAGS=-I .

# you can put library files in this directory
LDIR =../lib

#directory where object files will be created
ODIR=obj

#directory where output files will be created
OPDIR=../bin

# create string with ../include/<header filename> in our case ../include/unscramble.h
_DEPS = unscramble.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))


# create string with obj/<object filename> in our case obj/scramble.o (obj folder will be created under current i.e. source directory)
_LIBOBJ = scramble.o 
LIBOBJ = $(patsubst %,$(ODIR)/%,$(_LIBOBJ))



$(LIBOBJ): scramble.c
	$(CC) -c -o $@ $< $(CFLAGS)

#Library
$(LDIR)/mylib.a:$(LIBOBJ)
	ar rs -o $@ $^

$(ODIR)/unscramble.o: unscramble.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


$(OPDIR)/unscramble: $(ODIR)/unscramble.o $(LDIR)/mylib.a
	$(CC) -o $@ $^ $(CFLAGS)

# removes object files and temporary files created with ~ at the end of file name in current i.e. source and include directory
.PHONY: clean
clean: 
	rm obj/*.o 
	rm -f ../lib/*.*
	rm -f ../bin/unscramble

.PHONY: all
all: $(LDIR)/mylib.a $(OPDIR)/unscramble $(ODIR)/unscramble.o $(ODIR)/scramble.o 
