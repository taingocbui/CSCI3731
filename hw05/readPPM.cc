#include <cstdio>
#include "readPPM.h"

int** readPPM(int* width, int* height)
{
	char pheader[10];
	int maxpix;
	FILE* fp = fopen("test.ppm", "rb");
	fscanf(fp,"%s %d %d %d\n", pheader, width, height, &maxpix);
	printf("PSix: %s\n", pheader);
    printf("Width: %d\n", *width);
    printf("Height: %d\n", *height);
    printf("maximum: %d\n", maxpix);
	
	
	int size = *width * *height * 3;
	unsigned char* pixels = new unsigned char [size]; 
	
	fread(pixels, sizeof(unsigned char), size, fp);
	fclose(fp);
	int nsize = *width * *height;
	int** array = new int*[*height];
	*array = new int[nsize];
	
	for (int k = 1; k < *height; k++){
		array[k] = array[k - 1] + *width;
	}
	
	int f = 255;
	unsigned char* ff = (unsigned char*)(&f);
	int counter = 0; // using a counter variable for solution is consulted with Chris's idea 
	
	int* flat = *array;
	for (int i = 0; i < nsize; i++){
		
		unsigned char* ptr = (unsigned char*)(&flat[i]);
		ptr[0] = ff[0];
		ptr[1] = pixels[counter];
		ptr[2] = pixels[counter+1];
		ptr[3] = pixels[counter+2];
		counter+=3;
	}
	return array;
	
}