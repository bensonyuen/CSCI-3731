all: main

main.o: main.cc Angle.h Fish.h
	g++ -c main.cc
	
Angle.o: Angle.cc Angle.h
	g++ -c -std=c++11 Angle.cc

Fish.o: Fish.cc Fish.h
	g++ -c -std=c++11 Fish.cc

main:	Angle.o Fish.o main.o
	g++ -o main main.o Angle.o Fish.o