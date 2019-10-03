all: main

main.o: main.cc readPPM.h write_JPEG_file.h
	g++ -c main.cc
	
readPPM.o: readPPM.cc readPPM.h
	g++ -c -std=c++11 readPPM.cc -I /usr/local/include

write_JPEG_file.o: write_JPEG_file.cc write_JPEG_file.h
	g++ -c -std=c++11 write_JPEG_file.cc
	
main:	readPPM.o write_JPEG_file.o main.o
	g++ -o main main.o readPPM.o write_JPEG_file.o -L /usr/local/lib -ljpeg