all: main

main.o: main.cc Angle.h
	g++ -c main.cc
	
Angle.o: Angle.cc Angle.h
	g++ -c -std=c++11 Angle.cc

main:	Angle.o main.o
	g++ -o main main.o Angle.o