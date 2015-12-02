#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_K : public BaseGraphic {
    int x = rand() % 800 + 100;
    int y = rand() % 800;
    float radius_counter = 0;
    int color = rand() % 100;
public:
    void update() {
        radius_counter = radius_counter + 0.033f;
        if (radius_counter > 3.0f) {
            isDone = true;
        }
    }
    void draw() {
        ofSetColor(255 - color,0,155 + color);
        float radius = 50 + 10 * sin(radius_counter);
        ofFill();		// draw "filled shapes"
        ofDrawCircle(x,y,radius);
    }
};
