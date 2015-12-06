/*
 There are better / cleaner ways of doing this but
 it works pretty well through brute force.
 */
#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class LineGraphic_N : public BaseGraphic {
    float counter = 0;
    float x1 = 100;
    float y1 = 100;
    float x2 = 900;
    float y2 = 100;
    
public:
    void update() {
        if (x2 <= 100) {
            isDone = true;
        }
        x2 -= 40;
       
    }
    
    void draw() {
        ofSetColor(0,100,0);
        ofFill();
        ofSetLineWidth(10);
        ofDrawLine(x1,y1,x2,y2);
    }
};
