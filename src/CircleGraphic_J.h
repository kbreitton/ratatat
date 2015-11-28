#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_J : public BaseGraphic {
    int x = rand() % 1000;
    int y = 400;
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
        ofSetColor(0,255,0);
        float radius = 50 + 10 * sin(radius_counter);
        ofFill();		// draw "filled shapes"
        ofDrawCircle(x,y,radius);
        //string s = "x = " + std::to_string(x);
        //ofDrawBitmapString(s,30,30);
    }
};
