#include <cstdio>
#include "readPPM.h"

unsigned char* readPPM(int* width, int* height, int* size)
{
	char pheader[10];
	int maxpix;
	FILE* fp = fopen("test.ppm", "rb");
	fscanf(fp,"%s %d %d %d\n",&pheader, width, height, &maxpix);
	printf("PSix: %s\n", pheader);
    printf("Width: %d\n", *width);
    printf("Height: %d\n", *height);
    printf("maximum: %d\n", maxpix);
	
	*size = (*width * *height) *3;
	
	unsigned char* pixels = new unsigned char [*size]; 
	
	fread(pixels, sizeof(unsigned char), *size, fp);
	fclose(fp);
	
	return pixels;
	
}