#include "readPPM.h"
#include <iostream>
#include <string>
#include <fstream>


char* readPPM(const char* fileName, char *pSix, int *w, int *h, int *max)
{
    FILE* fp = fopen(file, "r");
    int value = 0;
    fscanf(fp, "%s", value);
	while(fscanf(fp, "%d", &value)!= EOF){
		printf("%s", value);
	}
}