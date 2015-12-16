#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class StripeGraphic_R : public BaseGraphic {
    bool dir = rand() % 2 == 1;
    float x = 100;
    float y = 450;
    float w = 0;
    float h = 20;
    
public:
    void update() {
        if ((w >= 800 && dir) || (w <= -800 && !dir)) {
            isDone = true;
        }
        
        if (dir)
            w += 70;
        else
            w -= 70;
    }
    void draw() {
        
        ofSetColor(ofColor::white);
        ofFill();
        if (dir) {
            ofDrawRectangle(x,y     ,w,h);
            ofDrawRectangle(x,y - 50,w,h);
            ofDrawRectangle(x,y - 100,w,h);
            ofDrawRectangle(x,y - 150,w,h);
            ofDrawRectangle(x,y - 200,w,h);
        } else {
            ofDrawRectangle(1000 - x,y     ,w,h);
            ofDrawRectangle(1000 - x,y - 50,w,h);
            ofDrawRectangle(1000 - x,y - 100,w,h);
            ofDrawRectangle(1000 - x,y - 150,w,h);
            ofDrawRectangle(1000 - x,y - 200,w,h);
        }
        
    }
};
