
#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class StripeGraphic_F : public BaseGraphic {
    bool dir = rand() % 2 == 1;
    float x = 300;
    float y = 450;
    int color = 255 * (rand() % 2);
    float w = 0;
    float h = 50;
    
public:
    void update() {
        if ((w >= 400 && dir) || (w <= -400 && !dir)) {
            isDone = true;
        }
        
        if (dir)
            w += 20;
        else
            w -= 20;
    }
    void draw() {
        
        ofSetColor(255 - color,0,color);
        ofFill();
        if (dir) {
            ofDrawRectangle(x,y     ,w,h);
            ofDrawRectangle(x,y - 100,w,h);
            ofDrawRectangle(x,y - 200,w,h);
        } else {
            ofDrawRectangle(1000 - x,y     ,w,h);
            ofDrawRectangle(1000 - x,y - 100,w,h);
            ofDrawRectangle(1000 - x,y - 200,w,h);
        }
        
    }
};
