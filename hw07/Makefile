all: main

main.o: main.cc Angle.h Fish.h Population.o
	g++ -c main.cc
	
Angle.o: Angle.cc Angle.h
	g++ -c -std=c++11 Angle.cc

Fish.o: Fish.cc Fish.h
	g++ -c -std=c++11 Fish.cc

Population: Population.cc Population.h
	g++ -c -std=c++11 Population.cc

main:	Angle.o Fish.o Population.o main.o
	g++ -o main main.o Angle.o Fish.o Population.o