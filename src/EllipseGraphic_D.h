#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class EllipseGraphic_D : public BaseGraphic {

    float x = 500;
    float y = 400;
    float w = 0;
    float h = 400;
    float acc = 0;
public:
    void update() {
        if (h <= 0){
            isDone = true;
        }
        w += 15;
        h -= acc;
        acc += .5;
    }
    void draw() {
        ofSetColor(255,150,0);
        ofFill();
        ofDrawEllipse(x, y, w, h);
        
    }
};
