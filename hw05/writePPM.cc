#include <cstdio>
#include "readPPM.h"
#include "writePPM.h"
void writePPM(int* width, int* height, int** array)
{	int counter = 0;
	int size = *width * *height;
	unsigned char* pixel = new unsigned char [size * 3];
	int* flat = *array;

	for (int i = size; i >= 0 ; i-- ){
		unsigned char* ptr = (unsigned char*) (&flat[i]);
		pixel[counter] = ptr[1];
		pixel[counter+1] = ptr[2];
		pixel[counter+2] = ptr[3];
		counter += 3;
	}
	
	FILE* fw = fopen("result.ppm","wb");
	fprintf(fw,"%s\n%d %d\n%d\n", "P6", *width, *height, 255);
	
	fwrite(pixel, sizeof(unsigned char), size*3, fw);
	fclose(fw);
	
}