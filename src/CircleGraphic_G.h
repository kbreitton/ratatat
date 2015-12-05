#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_G : public BaseGraphic {
    float radius = 0;
    int x = 0;
    int y = 0;
    float counter = 0;
    int color = rand() % 55;
    
public:
    void update() {
        if (radius >= 1300) {
            isDone = true;
            ofBackground(255 - color * 2,255 - color * .5,255 - color);
        }
        
        radius += 20;
    }
    void draw() {
        
        ofSetColor(255- color * 2,255 - color * .5,255 - color);
        ofFill();
        ofDrawCircle(x, y, radius);
    }
};
