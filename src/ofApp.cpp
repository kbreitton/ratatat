#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   ofSetCircleResolution(50);
   ofBackground(255,255,255);
   ofSetWindowTitle("Ratatat");
   ofSetFrameRate(60); // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps. 
   sHandler.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
  gHandler.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  gHandler.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    gHandler.addGraphic(key);
    sHandler.play(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
