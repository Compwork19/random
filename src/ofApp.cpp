#include "ofApp.h"
#include <random>

//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)

std::random_device rd;
std::mt19937 eng(rd());

//normal distribution
/*std::normal_distribution<> nd(1000,15);
std::normal_distribution<> nd1(800,15);

for(int y=0;y<20;y++)
 cout<<nd(eng)<<endl;
 
 cout<<endl;
 
 for(int x=0;x<20;x++)
 cout<<nd1(eng)<<endl;*/

//uniform distribution
std::uniform_int_distribution<> un(30,1000);
std::uniform_int_distribution<> un1(0,630);

for(int y=0;y<20;y++)
 cout<<un(eng)<<endl;
 
 cout<<endl;
 
 for(int x=0;x<20;x++)
 cout<<un1(eng)<<endl;
 
 
// set of x-coordinates for jewel
X = {500, 1000, 30, 100, 300, 200, 750, 380 };

//set of y-coordinates for jewel
Y = {630, 400, 900,40, 200, 0, 90, 30}; 
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
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
