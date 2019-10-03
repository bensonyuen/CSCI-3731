
#include "readPPM.h"
#include "write_JPEG_file.h"

int main() {
	
	int w = 0;
	int h = 0;
	int quality = 255;
	unsigned char *pixels = readPPM("test.ppm", &w, &h);
	write_JPEG_file("test2.jpeg", quality, pixels, w, h);
    
} // end of main
