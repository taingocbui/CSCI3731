#include <cstdio>
#include "readPPM.h"

unsigned char* readPPM(int* width, int* height)
{
	char pheader[10];
	int maxpix, size;
	FILE* fp = fopen("test.ppm", "rb");
	fscanf(fp,"%s\n %d %d %d\n",pheader, width, height, &maxpix);
	
	size = (*width * *height) *3;
	
	unsigned char* pixels = new unsigned char [size]; 
	
	fread(pixels, sizeof(unsigned char), size, fp);
	fclose(fp);
	printf("complete read\n");	
	return pixels;
	
}