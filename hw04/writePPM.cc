#include <cstdio>
#include "readPPM.h"
#include "writePPM.h"
void writePPM(int* width, int* height, int* size, unsigned char* pixel)
{
	FILE* fw = fopen("result.ppm","wb");
	fprintf(fw,"%s\n%d %d\n%d\n", "P6", *width, *height, 255);
	
	fwrite(pixel, sizeof(unsigned char), *size, fw);
	fclose(fw);
	
}