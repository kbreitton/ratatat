#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class LineGraphic_I : public BaseGraphic {
    float counter = 0;
    float x1 = 0;
    float y1 = 0;
    float x2 = 0;
    float y2 = 0;
    float radius = rand() % 200 + 50;
    float x_center = ofGetViewportWidth() / 2;
    float y_center = ofGetViewportHeight() / 2;

public:
    void update() {
        if (counter >= 10) {
            isDone = true;
        }
        x1 = x_center + radius*cos(counter);  
        y1 = y_center + radius*sin(counter);
        x2 = x_center - radius*cos(counter);
        y2 = y_center - radius*sin(counter);
       
        counter += .55;
    }
    
    void draw() {
        ofSetColor(ofColor::darkCyan);
        ofFill();
        ofSetLineWidth(99);
        ofDrawLine(x1,y1,x2,y2);
    }
};
