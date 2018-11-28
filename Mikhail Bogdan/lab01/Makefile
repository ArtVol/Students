build: algorithm.o io.o util.o main.o
	gcc algorithm.o io.o util.o main.o -o program
algorithm.o:
	gcc -c algorithm.c
io.o:
	gcc -c io.c
util.o:
	gcc -c util.c
main.o:
	gcc -c main.c
clean:
	rm -rf *.o program
rebuild: clean build