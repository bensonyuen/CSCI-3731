all: main

main.o: main.cc add.h
	g++ -c main.cc
	
add.o: add.cc add.h
	g++ -c add.cc
	
main:	add.o main.o
	g++ -o main main.o add.o