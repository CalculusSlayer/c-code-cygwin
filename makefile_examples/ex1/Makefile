CC = clang
CFLAGS = 

all: main

main: main.o
	$(CC) main.o -o main.exe

main.o: main.c main.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f main.o main
