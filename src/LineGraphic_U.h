#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class LineGraphic_U : public BaseGraphic {
    float counter = 0;
    float x1 = rand() % 100 - 100;
    float y1 = rand() % 100 - 100;
    float x2 = x1;
    float y2 = y1;

public:
    void update() {
        if (x2 >= 1200) {
            isDone = true;
        }
        x2 += 60;
        y2 += 50;
       
    }
    
    void draw() {
        ofSetColor(ofColor::darkTurquoise);
        ofFill();
        ofSetLineWidth(65);
        ofDrawLine(x1,y1,x2,y2);
    }
};
