#include "ofxOcrad.h"

//--------------------------------------------------------------
void ofxOcrad::setOfImage(ofImage *image){
	pixmap.data = image->getPixels();
	pixmap.height = image->getHeight();
	pixmap.width =  image->getWidth();
	pixmap.mode = OCRAD_greymap;
}

void ofxOcrad::setImage(ofImage *image)
{
	pixmap.data = image->getPixels();
	pixmap.height = image->getHeight();
	pixmap.width =  image->getWidth();
	pixmap.mode = OCRAD_greymap;
	
}
void ofxOcrad::setImage(unsigned char *image, int w, int h)
{
	pixmap.data = image;
	pixmap.height = h;
	pixmap.width =  w;
	pixmap.mode = OCRAD_greymap;
}

void ofxOcrad::doOCR()
{
	OCRAD_Descriptor * od;
	char str[1024];
	const unsigned char invert = 1;
	int blocknum, linenum;
	od = OCRAD_open();
	OCRAD_set_image(od, &pixmap, 0);
	OCRAD_get_errno(od);
	OCRAD_recognize(od, 1);
	blocknum = OCRAD_result_blocks(od);
	
	int pos = 0;
	for(int i=0; i<blocknum; i++){
		linenum = OCRAD_result_lines(od, i);
		
		for(int j=0; j<linenum; j++){
			sprintf(&str[pos],  "%s\n", OCRAD_result_line(od,i,j));
			pos = pos + strlen(OCRAD_result_line(od,i,j));
		}
	}
	strcpy(str_result, str);
	OCRAD_close(od);

}