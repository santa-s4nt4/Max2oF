#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

#define HOST "127.0.0.1"
#define PORT 54414

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
		ofxOscReceiver receiver;
		int oscMessage;
};
