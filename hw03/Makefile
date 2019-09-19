all: main

main.o: main.cc readPPM.h
	g++ -c main.cc
	
readPPM.o: readPPM.cc readPPM.h
	g++ -c -std=c++11 readPPM.cc
	
main:	readPPM.o main.o
	g++ -o main main.o readPPM.o