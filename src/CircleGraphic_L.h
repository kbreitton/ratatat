//
//  CircleGraphic.h
//  emptyExample
//
//  Created by Jack Kearney on 11/24/15.
//
//
#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_L : public BaseGraphic {
    //int x;
    //int y;
    //int radius;
    //float x_counter;
    //float y_counter;
    float radius_counter = 0;
    //float duration;
    //float duration_counter = 0;
public:
    void update() {
        radius_counter = radius_counter + 0.033f;
        if (radius_counter > 2.0f) {
            isDone = true;
        }
    }
    void draw() {
        ofSetColor(255,130,0);
        float radius = 50 + 10 * sin(radius_counter);
        ofFill();		// draw "filled shapes"
        ofDrawCircle(100,400,radius);
    }
    
    
};
