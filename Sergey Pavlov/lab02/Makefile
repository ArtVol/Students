build: ./bin/clist.o ./bin/main.o
	gcc ./bin/clist.o ./bin/main.o -o pose_db
./bin/clist.o: ./src/clist.c
	gcc -c ./src/clist.c -o ./bin/clist.o
./bin/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./bin/main.o
clean:
	rm -rf ./bin/*.o pose_db
rebuild: clean build

