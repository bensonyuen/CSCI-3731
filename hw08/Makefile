all: main

main.o: main.cc Image.h
	g++ -c -std=c++11 main.cc
	
Image.o: Image.cc Image.h
	g++ -c -std=c++11 Image.cc

main:	Image.o main.o
	g++ -o main main.o Image.o