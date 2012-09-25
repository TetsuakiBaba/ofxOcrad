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
	char str_result[512];
};
