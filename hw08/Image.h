#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>

class Image{
	private: 
		
		// int width = 650;
		// int height = 652;

	public: 
		Image();
		unsigned char* pixels = nullptr;
		int w;
		int h;
		void readPPM(const char* fileName);
		void writePPM(const char *fileName, Image i);
		// void write_JPEG_file (const char *filename, int quality, Image i);
		virtual ~Image();

	};

#endif
