#include "readPPM.h"
#include <cstdio>

int** readPPM(const char *fileName, int *width, int *height){

    FILE* fp = fopen(fileName, "rb");
    char pSix[3]; //array to read P6
    fscanf(fp, "%s\n", pSix);
    if ((pSix[0] != 'P') || (pSix[1] != '6')){
    	printf("%s\n", "Not a PPM image");
    }
    fscanf(fp, "%d\n", width); //reads width
    fscanf(fp, "%d\n", height); //reads height
    int max;
    fscanf(fp, "%d\n", &max); //reads max
    printf("Width: %d\n", *width);
    printf("Height: %d\n", *height);
    unsigned char* pixels = new unsigned char[*width * *height * 3];
    fread(pixels, sizeof(*pixels), (*width * *height * 3), fp);
    fclose(fp);

    int** array = new int*[*height]; //array of pointers
    *array = new int[*width * *height]; //allocates flat array
    for(int i=1; i < *height; ++i) { 
        array[i] = array[i-1] + *width; //assigns rest of pointers to the start of each row
        }
    unsigned char *charArray = new unsigned char[*pixels];
    for (int j = 0; j < (*width * *height * 3); j++){
        pixels[j] = charArray[j]; //loops over pixels casting into chars
    }
    return array;
}