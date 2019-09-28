
#include "readPPM.h"
#include "writePPM.h"

int main() {
	int w = 0;
	int h = 0;
	int** pixels = readPPM("test.ppm", &w, &h);
	writePPM("test2.ppm", pixels, w, h);
   
} // end of main

