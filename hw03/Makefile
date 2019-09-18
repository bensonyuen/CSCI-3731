all: main

main.o: main.cc readPPM.h
	g++ -c main.cc
	
readPPM.o: readPPM.cc readPPM.h
	g++ -c readPPM.cc
	
main:	readPPM.o main.o
	g++ -o main main.o readPPM.o