all: main

main.o: main.cc Angle.h Fish.h FlippyFish.h DrunkenFish.h
	g++ -c -std=c++11 main.cc

Fish.o: Fish.cc Fish.h
	g++ -c -std=c++11 Fish.cc

FlippyFish.o: FlippyFish.cc FlippyFish.h
	g++ -c -std=c++11 FlippyFish.cc

DrunkenFish.o: DrunkenFish.cc DrunkenFish.h
	g++ -c -std=c++11 DrunkenFish.cc

main:	Fish.o FlippyFish.o DrunkenFish.o main.o
	g++ -o main main.o Fish.o FlippyFish.o DrunkenFish.o