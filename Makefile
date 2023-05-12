CC=g++
CFLAGS=-I.
FILES=src/*.cpp
OUTPUT=clocking

$(OUTPUT):
	$(CC) $(CFLAGS) $(FILES) -o $(OUTPUT)
