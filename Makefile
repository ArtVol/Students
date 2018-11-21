CC = gcc

build: main.o
	gcc main.o -o main
main.o:
	gcc -c main.c -o main.o

clean:
	rm -f main main.o
