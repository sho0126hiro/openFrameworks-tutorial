#pragma once

#include "ofMain.h"

struct ColorRGB{
	int r;
	int g;
	int b;
};

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	static const int NUM = 100;

	ofVec2f location[NUM];
	ofVec2f velocity[NUM];//NUMÂÌÊuE¬xxNg
	ofVec2f pressXY;//}EXNbNðÛ¶

	ColorRGB defaultColor[NUM];
	ColorRGB color[NUM];

	int circle_r;//~Ì¼a

	int g_check;
	double g;//Á¬x
	double repulsion;//½­W
	double g_x;//x²ûüÌ¸¦
	int v_check[NUM];

};