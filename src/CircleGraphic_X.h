#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"
/*
 * Moves left to right, starts at a random y coordinate
 * Green
 */
class CircleGraphic_V : public BaseGraphic {
    int x = 800;
    int y = 200;
    float radius_counter = 0;
    float radius = 200;
    
public:
    void update() {
        if (radius <= 3){
            isDone = true;
        }
        radius -= 3;
    }
    void draw() {
        ofSetColor(255,0,255);
        ofFill();		// draw "filled shapes"
        ofDrawCircle(x,y,radius);
    }
};
