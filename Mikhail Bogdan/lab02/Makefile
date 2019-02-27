build: clist.o io.o main.o
	gcc ./bin/clist.o ./bin/main.o -o lab01
util.o: ./src/clist.c
	gcc -c ./src/clist.c -o ./bin/clist.o
main.o: ./src/main.c
	gcc -c ./src/main.c -o ./bin/main.o
clean:
	rm -rf *.o lab02
rebuild: clean build
