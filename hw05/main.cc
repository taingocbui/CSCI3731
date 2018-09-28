#include <cstdio>
#include "readPPM.h"
#include "writePPM.h"
int main(){
	int width = 0;
	int height = 0;
	
	int** pixels = readPPM(&width, &height);
	
	writePPM(&width, &height, pixels);
	
	delete [] *pixels;
	delete [] pixels;
	pixels = NULL;
}