#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "ScreenConsole.h"

#define HOST "127.0.0.1"
#define PORT 54414

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
		ofxOscReceiver receiver;
		float oscMessage;

		ScreenConsole console;
};
