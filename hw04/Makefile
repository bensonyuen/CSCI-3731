all: main

main.o: main.cc readPPM.h writePPM.h
	g++ -c main.cc
	
readPPM.o: readPPM.cc readPPM.h
	g++ -c -std=c++11 readPPM.cc

writePPM.o: writePPM.cc writePPM.h
	g++ -c -std=c++11 writePPM.cc
	
main:	readPPM.o writePPM.o main.o
	g++ -o main main.o readPPM.o writePPM.o