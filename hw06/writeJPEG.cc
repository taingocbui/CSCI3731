#include <cstdio>
#include <jpeglib.h>
#include <setjmp.h>
#include "readPPM.h"
#include "writeJPEG.h"
void writeJPEG(int* width, int* height, unsigned char* pixel)
{
	FILE* fw = fopen("result.JPEG","wb");
	
	struct jpeg_compress_struct cinfo;//initialize a JPEG compression object
	struct jpeg_error_mgr       jerr;
	
	cinfo.err = jpeg_std_error(&jerr);
	jpeg_create_compress(&cinfo);
	jpeg_stdio_dest(&cinfo, fw);
	
	cinfo.image_width      = *width; //set image width
	cinfo.image_height     = *height; // set image height
	cinfo.input_components = 3;
	cinfo.in_color_space   = JCS_RGB;
	
	jpeg_set_defaults(&cinfo);
	jpeg_set_quality (&cinfo, 75, true);
	
	jpeg_start_compress(&cinfo, true);
	unsigned char* row_pointer;
	while (cinfo.next_scanline < cinfo.image_height) {
		
		row_pointer = pixel + (cinfo.next_scanline * *width * 3);
		(void)jpeg_write_scanlines(&cinfo, &row_pointer, 1);
	}
	
	jpeg_finish_compress(&cinfo);
	fclose(fw);
	jpeg_destroy_compress(&cinfo);
	printf("complete write\n");
}