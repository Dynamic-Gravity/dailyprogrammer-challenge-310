CC := g++
DEBUG := -g
CFLAGS := -std=c++14
LFLAGS := -Wall

SOURCEDIR := src
SOURCES := $(shell find $(SOURCEDIR) -name '*.cpp')

BINARY := C310i.out
INPUT := input.txt
INPUT2 := input-challenge.txt

.PHONY: clean

p1:
	$(CC) $(LFLAGS) $(CFLAGS) $(SOURCES) -o $(BINARY)

p2:
	$(CC) $(LFLAGS) $(CFLAGS) $(SOURCES) $(DEBUG) -o $(BINARY)

all: p1

debug: p2

run: all
	./$(BINARY) $(INPUT)

challenge: all
	./$(BINARY) $(INPUT2)

clean:
	\rm ./$(BINARY)

distclean:
	\rm ./*.o
