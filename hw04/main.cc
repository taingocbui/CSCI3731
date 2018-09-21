#include <cstdio>
#include "readPPM.h"
#include "writePPM.h"
int main(){
	int width = 0;
	int height = 0;
	int size = 0;
	unsigned char* pixels = readPPM(&width, &height, &size);
	
	writePPM(&width, &height, &size, pixels);
	return 0;
}