#include "readPPM.h"
#include <cstdio>
//#include <cstdlib>
unsigned char* readPPM(const char *fileName, int *w, int *h){

    FILE* fp = fopen("fileName", "rb");
    char p6[3];
    fscanf(fp, "%s", p6);
    if ((p6[0] != 'P') || (p6[1] != '6')){
    	printf("%s\n", "Not a PPM image");
    }

    fscanf(fp, "%d", w);
    fscanf(fp, "%d", h);

    // int *max;
    // fscanf(fp, "%d", max);

    return nullptr;

	//unsigned char* pixels = new unsigned char[];
    //return pixels;

	// while(fscanf(fp, "%d", &value)!= EOF){
	// 	printf("%s", value);
	// }
}
