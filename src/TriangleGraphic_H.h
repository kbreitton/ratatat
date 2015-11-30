//
//  TriangleGraphic_H.h
//
// draws two triangles expanding from one point then retracting
//
//
//
#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class TriangleGraphic_H : public BaseGraphic {
    int x = 250 + rand() % 500;
    int y = 300;
    int color = rand() % 255;
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
        ofSetColor(0,255 - color,color);
        float radius = 0 + 75 * sin(radius_counter);
        ofFill();		// draw "filled shapes"
        ofDrawTriangle(x,y,x + radius, y - radius, x - radius, y - radius);
        ofDrawTriangle(x,y,x + radius, y + radius, x - radius, y + radius);
    }
};
