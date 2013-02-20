#pragma once

#include "ofMain.h"
#include "ocradlib.h"

class ofxOcrad{
public:
	ofxOcrad()
	{
		if( OCRAD_version()[0] != OCRAD_version_string[0] ){
			printf( "bad library version\n" );
		}
	}
	~ofxOcrad(){}
	void setOfImage( ofImage *image );
	void setImage(ofImage *image);
	void setImage(unsigned char *image, int w, int h);
	char str_result[512];
	void doOCR();
private:
	OCRAD_Pixmap pixmap;

};
