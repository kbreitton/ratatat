#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CurveGraphic_T : public BaseGraphic {
    
    float x0 = 0;
    float y0 = 0;
    float x1 = 550;
    float y1 = 0;
    float x2 = 600;
    float y2 = 0;
    float x3 = 1000;
    float y3 = 1000;
    
    
    float counter = 0;
public:
    void update() {
        if (counter >=  PI * .5){
            isDone = true;
        }
        counter += .05;
        x1 = 300 * cos(counter * 2) + counter * 10;
        y1 = 1000 - (300 * sin(counter) + counter * 10);
        x2 = 600 * cos(counter) + counter * 10;
        y2 = 1000 - (600 * sin(counter * 2) + counter * 10);
        
    }
    void draw() {
        ofFill();
        ofSetColor(150,255 - counter * 50,50);
        ofBeginShape();
        ofVertex(x0,y0);
        ofBezierVertex(x1,y1,x2,y2,x3,y3);
        ofEndShape();
        
    }
};
