CFLAGS=-Wall -Wextra -pedantic -std=c99
SOURCES=$(wildcard ./source/*.c)
INCLUDEFLAGS = -I ./headers

all: 
	$(CC) $(SOURCES) -o kilo $(CFLAGS) $(INCLUDEFLAGS)

clean:
	rm -rf *.o kilo