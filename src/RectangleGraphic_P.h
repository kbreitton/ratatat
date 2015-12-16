#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class RectangleGraphic_P : public BaseGraphic {
    int x1 = 0;
    int y1 = 0;
    int x2 = ofGetViewportWidth();
    int y2 = 0; 
    int color = rand() % 55;
    
public:
    void update() {
        if (y2 >= 1300) {
            isDone = true;
            ofBackground(230 - color * 2,230 - color * 2,230 - color);
        }
        
        y2 += 50; 
    }
    void draw() {
        
        ofSetColor(230- color * 2,230 - color * .5,230 - color);
        ofFill();
        ofDrawRectangle(x1, y1, x2, y2);
    }
};
