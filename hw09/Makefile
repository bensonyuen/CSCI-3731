all: main

main.o: main.cc Angle.h Fish.h FlippyFish.h DrunkenFish.h Population.h
	g++ -c -std=c++11 main.cc
	
Angle.o: Angle.cc Angle.h
	g++ -c -std=c++11 Angle.cc

Fish.o: Fish.cc Fish.h
	g++ -c -std=c++11 Fish.cc

FlippyFish.o: FlippyFish.cc FlippyFish.h
	g++ -c -std=c++11 FlippyFish.cc

DrunkenFish.o: DrunkenFish.cc DrunkenFish.h
	g++ -c -std=c++11 DrunkenFish.cc

Population.o: Population.cc Population.h
	g++ -c -std=c++11 Population.cc

main:	Angle.o Fish.o FlippyFish.o DrunkenFish.o Population.o main.o
	g++ -o main main.o Angle.o Fish.o FlippyFish.o DrunkenFish.o Population.o