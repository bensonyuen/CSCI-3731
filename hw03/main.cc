

#include "readPPM.h"
/************************************************************************
 *
 ************************************************************************/
int main() {
	int w;
	int h;
	//printf("%s\n", "hello");
	readPPM("test.ppm", &w, &h);
	
	// FILE* fp = fopen("counter", "r");
	// int value = 0;
	// while(fscanf(fp, "%d", &value)!= EOF){
	// 	printf("%d", value);
	// }

	// fclose(fp);

	// value++;

 //    FILE* fw = fopen("counter", "w");
 //    fprintf(fw, "%d", value);
 //    fclose(fw);
    
} // end of main

