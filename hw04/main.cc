#include <cstdio>
#include "readPPM.h"
int main(){
	
	char fileName[10] = "test.ppm";
	char pheader[10];
	int width = 0;
	int height = 0;
	int pixel = 0;
	int size = 128;
	readPPM(fileName, pheader, &width, &height, &pixel, &size);
	return 0;
}