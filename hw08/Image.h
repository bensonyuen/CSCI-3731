#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>

class Image{
	private: 
		unsigned char* pixels = nullptr;

	public: 
		Image();
		int w;
		int h;
		void readPPM(const char* fileName);
		void writePPM(const char *fileName, Image i);
		virtual ~Image();

	};

#endif
