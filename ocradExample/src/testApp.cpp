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
	ocrad.setOfImage(&image);
}

//--------------------------------------------------------------
void testApp::draw(){
	image.draw(0,0);
	ofDrawBitmapString(ocrad.str_result, image.getWidth()+20,200);
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