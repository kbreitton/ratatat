#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_L : public BaseGraphic {
    float radius_counter = 0;
    
public:
    void update() {
        radius_counter = radius_counter + 0.033f;
        if (radius_counter > 5.0f) {
            isDone = true;
        }
    }
    void draw() {
        // color changes a bit, not by much
        ofSetColor(150 + 50 * radius_counter ,50,0);
        float radius = 50 + 10 * sin(radius_counter);
        ofFill();		
        ofDrawCircle(100,400,radius);
    }
};
