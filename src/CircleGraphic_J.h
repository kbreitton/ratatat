#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"
/*
 * Moves left to right, starts at a random y coordinate
 * Green
 */
class CircleGraphic_J : public BaseGraphic {
    int x = 0;
    int y = 500;
    //int radius;
    //float x_counter;
    //float y_counter;
    float radius_counter = 0;
    float radius = 150;
    //float duration;
    //float duration_counter = 0;
public:
    void update() {
        if (y <= 0){
            isDone = true;
        }
        if (x<= 500){
            x += 10;
            radius = 100;
        }else {
            y -= 10;
            radius = radius - 1;
        }
    }
    void draw() {
        ofSetColor(255,0,255);
        ofFill();		// draw "filled shapes"
        ofDrawCircle(x + 1000 * radius_counter,y,radius);
 
    }
};
