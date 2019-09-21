#include "writePPM.h"
#include "readPPM.h"
#include <cstdio>

void writePPM(const char *fileName, unsigned char charArray[]){
    FILE* fp = fopen(fileName, "wb");
    fwrite(charArray, sizeof(char), 128, fp);
    fclose(fp);

}