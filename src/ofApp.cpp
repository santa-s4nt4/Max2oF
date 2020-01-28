#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	receiver.setup(PORT);
	ofSetCircleResolution(64);
}

//--------------------------------------------------------------
void ofApp::update(){
	while (receiver.hasWaitingMessages()) {
		ofxOscMessage m;

		receiver.getNextMessage(m);

		oscMessage = m.getArgAsFloat(0);
		console("address") << oscMessage << " " << m.getNumArgs();

		if (m.getAddress() == "/sound") {
			std::string sound = std::to_string(oscMessage);
			console(sound);
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, oscMessage * 5.0);
	console.print(40, 40);
}