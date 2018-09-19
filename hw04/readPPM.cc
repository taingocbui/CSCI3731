#include <cstdio>
#include "readPPM.h"

void readPPM(const char* fName, char* pheader, int* width, int* height, int* pixel, int* size)
{
	FILE* fp = fopen(fName, "rb");
	fscanf(fp,"%s\n%d\n%d\n%d\n",pheader, width, height, pixel);
	printf("PSix: %s\n", pheader);
    printf("Width: %d\n", *width);
    printf("Height: %d\n", *height);
    printf("maximum: %d\n", *pixel);
	
	int s = *width * *height;
}