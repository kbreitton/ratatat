#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_K : public BaseGraphic {
    int x = rand() % 800 + 100;
    int y = rand() % 800 + 100;
    //int radius;
    //float x_counter;
    //float y_counter;
    float radius_counter = 0;
    //float duration;
    //float duration_counter = 0;
public:
    void update() {
        radius_counter = radius_counter + 0.033f;
        if (radius_counter > 3.0f) {
            isDone = true;
        }
    }
    void draw() {
        ofSetColor(255,0,0);
        float radius = 50 + 10 * sin(radius_counter);
        ofFill();		// draw "filled shapes"
        ofDrawCircle(x,y,radius);
        //string s = "x = " + std::to_string(x);
        //ofDrawBitmapString(s,30,30);
        //string q = "y = " + std::to_string(y);
        //ofDrawBitmapString(q, 30,60);
    }
};
