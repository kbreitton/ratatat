#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"
/*
 * Moves left to right, starts at a random y coordinate
 * Green
 */
class CirclesGraphic_S : public BaseGraphic {
    int x = 500;

    
    int r1 = (rand() % 200 - 100) * 2;
    int r2 = (rand() % 200 - 100) * 2;
    int r3 = (rand() % 200 - 100) * 2;
    int r4 = (rand() % 200 - 100) * 2;
    
    float radius = 20;
    float counter = 0;
    int y = 400;
    
public:
    void update() {
        if (counter >= 3){
            isDone = true;
        } else {
            counter += .1f;
        }
    }
    void draw() {
        
         ofFill();
         ofSetColor(0,255,255);
         ofDrawCircle(x + r1 * counter,y + r2 * counter,radius);
         ofSetColor(0,0,255);
         ofDrawCircle(x + r2 * counter,y + r3*counter,radius);
         ofSetColor(255,0,0);
         ofDrawCircle(x + r3 * counter,y + r4 * counter,radius);
         ofSetColor(0,255,0);
         ofDrawCircle(x + r4 *counter,y +r1*counter,radius);
        
    }
};

