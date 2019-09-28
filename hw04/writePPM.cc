#include "writePPM.h"
#include "readPPM.h"
#include <cstdio>

void writePPM(const char *fileName, int** charArray[], int w, int h){
    FILE* fp = fopen(fileName, "wb");
    fprintf(fp, "%s\n", "P6");
    fprintf(fp, "%d ", w);
    fprintf(fp, "%d\n", h);
    fprintf(fp, "%d\n", 255);
    fwrite(charArray, sizeof(*charArray), (w * h * 3), fp);
    fclose(fp);
}