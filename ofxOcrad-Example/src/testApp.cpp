#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
	
	image.loadImage("words.png");
	image.setImageType(OF_IMAGE_GRAYSCALE);

	
	if( OCRAD_version()[0] != OCRAD_version_string[0] ){
		printf( "bad library version\n" );
	}
	
	
	
}

//--------------------------------------------------------------
void testApp::update(){
	OCRAD_Descriptor * od;
	OCRAD_Pixmap pixmap;
	
	pixmap.data = image.getPixels();
	pixmap.height = image.getHeight();
	pixmap.width =  image.getWidth();
	pixmap.mode = OCRAD_greymap;
	
	
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
			//printf("%s\n", OCRAD_result_line(od,i,j));
		}
	}
	printf("%s", str);
	OCRAD_close(od);
}

//--------------------------------------------------------------
void testApp::draw(){
	image.draw(0,0);
	ofDrawBitmapString(str, image.getWidth()+20,200);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}