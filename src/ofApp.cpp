#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofLogToConsole();

	try {
		// Create an empty ofxIO::ByteBuffer.
		ofxIO::ByteBuffer buffer;

		// Load the file contents into the buffer.
		ofxIO::ByteBufferUtils::loadFromFile("14.jpg", buffer);

		// Base64 encode the images's bytes.
		//
		// Additional encoding option include URL-safety, chunking and padding.
		std::string base64Buffer = ofxIO::Base64Encoding::encode(buffer);

		// Print the base64 encoded bytes to the console.
		//std::cout << base64Buffer << std::endl;

		// Decode the bytes.
		//
		// Can also decode URL-safe base64 encoding.
		std::string decodedBytes = ofxIO::Base64Encoding::decode(base64Buffer);

		// Write the decoded bytes out to a new file.
		ofxIO::ByteBuffer decodedBuffer(decodedBytes);

		// Save the file back to disk.
		ofxIO::ByteBufferUtils::saveToFile(decodedBuffer, "14_copy.jpg");
	}
	catch (const std::exception& exc) {
		ofLogError("ofApp::setup") << "I/O Exception: " << exc.what();
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackgroundGradient(ofColor::white, ofColor::black);
	ofDrawBitmapStringHighlight("See console for output.", ofPoint(30, 30));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
