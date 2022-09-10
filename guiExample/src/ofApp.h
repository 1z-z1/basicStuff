#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
	
public:

	std::vector<shared_ptr<ofAppBaseWindow> > windows;

	void setup();
	void update();
	void draw();
	
	void drawRandomInWindow(ofEventArgs & args);
	void openRenderWindow();
	
	void exit();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);		

	void circleResolutionChanged(int & circleResolution);
	void ringButtonPressed();

	bool bHide;


	ofxFloatSlider var1;
	ofxColorSlider color;
	ofxVec2Slider center;
	ofxIntSlider circleResolution;
	ofxToggle filled;
	ofxButton twoCircles;
	ofxButton ringButton;
	ofxLabel screenSize;



	ofxPanel gui;

	ofSoundPlayer ring;

	ofTexture imageTexture;
    ofPoint points[4];
    int cornerIndex = 0;

	ofImage img;
	ofEasyCam cam;

	private:
};

