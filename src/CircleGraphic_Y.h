#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_Y : public BaseGraphic {
    int x = ofGetViewportWidth() / 2; 
    int y = ofGetViewportHeight() / 2;
    float radius = 20;
public:
    void update() {
        if (radius > 650) {
            isDone = true;
        }
        radius += 30;
    }
    void draw() {
        ofSetLineWidth(2);
        ofSetColor(ofColor::black);
        ofNoFill();
        ofDrawCircle(x,y,radius);
    }
};
