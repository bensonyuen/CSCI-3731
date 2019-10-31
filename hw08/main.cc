#include "Image.h"

int main() {
	int w = 0;
	int h = 0;
	Image myImage;
	myImage.readPPM("test.ppm");
	Image writtenImage;
	writtenImage.writePPM("test2.ppm", myImage);
} // end of main
