#include "Image.h"

int main() {
	int w = 0;
	int h = 0;
	int quality = 255;
	Image myImage;
	myImage.readPPM("test.ppm");

	Image writtenPPMImage;
	writtenPPMImage.writePPM("test2.ppm", myImage);

	// Image writtenJPEGImage;
	// writtenJPEGImage.write_JPEG_file("test3.jpeg", quality, myImage);
} // end of main