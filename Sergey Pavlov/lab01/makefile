build: algorithm.o io.o util.o main.o
	gcc ./bin/algorithm.o ./bin/io.o ./bin/util.o ./bin/main.o -o lab01
algorithm.o: ./src/algorithm.c
	gcc -c ./src/algorithm.c -o ./bin/algorithm.o
io.o: ./src/io.c
	gcc -c ./src/io.c -o ./bin/io.o
util.o: ./src/util.c
	gcc -c ./src/util.c -o ./bin/util.o
main.o: ./src/main.c
	gcc -c ./src/main.c -o ./bin/main.o
clean:
	rm -rf *.o lab1
rebuild: clean build
