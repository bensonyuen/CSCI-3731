#include "Image.h"
#include <cmath>
#include <string>
#include <cstdio>



Image::Image() { 

}   //end of constructor


Image::~Image() {

}

void Image::readPPM(const char *fileName) {
    FILE* fp = fopen(fileName, "rb");
    char pSix[3]; //array to read P6
    fscanf(fp, "%s\n", pSix);
    if ((pSix[0] != 'P') || (pSix[1] != '6')){
        printf("%s\n", "Not a PPM image");
    }

    fscanf(fp, "%d\n", &w); //reads width
    fscanf(fp, "%d\n", &h); //reads height

    int max;
    fscanf(fp, "%d\n", &max); //reads max

    printf("Width: %d\n", w);
    printf("Height: %d\n", h);

    unsigned char* pixels = new unsigned char[w * h * 3];

    fread(pixels, sizeof(*pixels), (w * h * 3), fp);
    
    fclose(fp);

}

void Image::writePPM(const char *fileName, Image i){
    FILE* fp = fopen(fileName, "wb");
    fprintf(fp, "%s\n", "P6");
    fprintf(fp, "%d ", w);
    fprintf(fp, "%d\n", h);
    fprintf(fp, "%d\n", 255);
    fwrite(i.pixels, sizeof(*i.pixels), (w * h * 3), fp);
    fclose(fp);
}
