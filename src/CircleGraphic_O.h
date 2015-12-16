#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_O : public BaseGraphic {
    int center_x = ofGetViewportWidth() / 2; 
    int center_y = ofGetViewportHeight() / 2;
    int x = center_x + 100;
    int y = center_y;
    float radius_static = 250;
    float radius_dynamic = 0;
    ofColor background_color;

public:
    void update() {
        if (radius_dynamic > 600) {
            isDone = true;
        }
        radius_dynamic += 20;
        background_color = ofGetBackgroundColor();
    }

    void draw() {
        ofSetLineWidth(60);
        ofSetColor(ofColor::darkSalmon);
        ofNoFill();
        ofDrawCircle(center_x,center_y,radius_static);

        ofSetColor(background_color);
        ofFill();
        ofDrawCircle(x, y, radius_dynamic);
    }
};
