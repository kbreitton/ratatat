#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CirclesGraphic_A : public BaseGraphic {
    int x = 500;
    int y = 400;
    int w = 500;
    int radius = 20;
public:
    void update() {
        if (w <= 0){
            isDone = true;
        } else {
            w -= 10;
        }
    }
    void draw() {
        
        
        ofSetColor(0,255,255);
        ofFill();
        
        ofDrawCircle(x - w, y,radius);
        ofDrawCircle(x + w,y,radius);
        ofDrawCircle(x ,y + w,radius);
        ofDrawCircle(x ,y - w,radius);
        
    }
};

