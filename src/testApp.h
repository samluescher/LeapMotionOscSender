#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "ofxLeapMotion.h"
#include "ofxStrip.h"

#define RELIEF_HOST "localhost" //"18.111.18.106"
#define RELIEF_PORT 78746

class testApp : public ofBaseApp{

  public:
    void setup();
    void update();
    void draw();
	
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
		
	ofxLeapMotion leap;
	vector <ofxLeapMotionSimpleHand> simpleHands;
    
    vector <ofxLeapMotionSimpleHand> simpleHandsPrevious;
    ofxOscSender sender;
    
	vector <int> fingersFound; 
	ofEasyCam cam;
	ofLight l1;
	ofLight l2;
	ofMaterial m1;
	
	map <int, ofPolyline> fingerTrails;
};
