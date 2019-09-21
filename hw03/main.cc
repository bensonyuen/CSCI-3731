
#include "readPPM.h"
#include "writePPM.h"

int main() {
	int w = 0;
	int h = 0;
	readPPM("test.ppm", &w, &h);
	writePPM("test.ppm", readPPM("test.ppm", &w, &h));
    
} // end of main

