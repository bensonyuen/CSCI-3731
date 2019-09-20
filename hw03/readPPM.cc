#include "readPPM.h"
#include <cstdio>

unsigned char* readPPM(const char *fileName, int *w, int *h){

    FILE* fp = fopen(fileName, "rb");
    char pSix[3];
    fscanf(fp, "%s\n", pSix);
    if ((pSix[0] != 'P') || (pSix[1] != '6')){
    	printf("%s\n", "Not a PPM image");
    }

    fscanf(fp, "%d\n", w);
    fscanf(fp, "%d\n", h);

    int max;
    fscanf(fp, "%d\n", &max);

    printf("P6: %s\n", pSix);
    printf("Width: %d\n", *w);
    printf("Height: %d\n", *h);
    printf("Max: %d\n", max);

    unsigned char* pixels = new unsigned char[max];
    //fread(pixels, sizeof(char), 128, fp);

    while (fread(pixels, sizeof(char), 128, fp)) {
        printf("%s", pixels);
    } // end of for loop

    fclose(fp);
    //return nullptr;

    return pixels;


}