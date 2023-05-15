#include "modulate.h"
#include "ofxOpenCv.h" 
#include "ofxKinect.h"
#include "ofMain.h"

void drawCuadri(int ver1[], int ver2[], int ver3[], int ver4[]) {
	ofSetColor(ofColor::whiteSmoke);
	ofDrawLine(ver1[0], ver1[1], ver2[0], ver2[1]);
	ofDrawLine(ver2[0], ver2[1], ver3[0], ver3[1]);
	ofDrawLine(ver3[0], ver3[1], ver4[0], ver4[1]);
	ofDrawLine(ver4[0], ver4[1], ver1[0], ver1[1]);
}
