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
    float radius_counter = 0;
    float radius = 150;

public:
    void update() {
        if (y <= 0){
            isDone = true;
        }
        if (x<= 500){
            x += 20;
            radius = 100;
        }else {
            y -= 20;
            radius = radius - 2;
        }
    }
    void draw() {
        ofSetColor(255,0,255);
        ofFill();		// draw "filled shapes"
        ofDrawCircle(x + 1000 * radius_counter,y,radius);
 
    }
};
