#include "readPPM.h"
#include <cstdio>

unsigned char* readPPM(const char *fileName, int *w, int *h){

    FILE* fp = fopen(fileName, "rb");
    char pSix[3]; //array to read P6
    fscanf(fp, "%s\n", pSix);
    if ((pSix[0] != 'P') || (pSix[1] != '6')){
    	printf("%s\n", "Not a PPM image");
    }

    fscanf(fp, "%d\n", w); //reads width
    fscanf(fp, "%d\n", h); //reads height

    int max;
    fscanf(fp, "%d\n", &max); //reads max

    printf("Width: %d\n", *w);
    printf("Height: %d\n", *h);

    unsigned char* pixels = new unsigned char[*w * *h * 3];
    //pixels = (int*);
    //int* flat = new int[*w * *h];

    fread(pixels, sizeof(*pixels), (*w * *h * 3), fp);
    // while (fread(pixels, sizeof(char), 128, fp)) {
    //     printf("%s", pixels); //prints unsigned chars
    // }

    fclose(fp);

    return pixels;

}