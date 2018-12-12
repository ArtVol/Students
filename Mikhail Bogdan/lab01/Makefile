build: algorithm.o io.o util.o main.o
	gcc algorithm.o io.o util.o main.o -o program
algorithm.o: algorithm.c
	gcc -c algorithm.c
io.o: io.c
	gcc -c io.c
util.o: util.c
	gcc -c util.c
main.o: main.c
	gcc -c main.c
clean:
	rm -rf *.o program
rebuild: clean build
