#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class RectangleGraphic_B : public BaseGraphic {
    float radius = 0;
    int x = 600;
    int y = 500;
    int color = rand() % 55;
    
public:
    void update() {
        if (radius >= 150) {
            isDone = true;
        }
        
        radius += 3;
        color += 3;
    }
    void draw() {
        
        ofSetColor(255- color,255 - color * 2,255 - color * .5);
        ofFill();
        ofDrawRectRounded(x, y, 200, 200, radius);
    }
};
