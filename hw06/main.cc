#include <cstdio>
#include <jpeglib.h>
#include <setjmp.h>
#include "readPPM.h"
#include "writeJPEG.h"
int main(){
	int width = 0;
	int height = 0;
	
	unsigned char* pixels = readPPM(&width, &height);
	
	writeJPEG(&width, &height, pixels);
	return 0;
}