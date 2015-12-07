#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CurveGraphic_X : public BaseGraphic {
    
    float x0 = 200;
    float y0 = 300;
    float x1 = 550;
    float y1 = 300;
    float x2 = 600;
    float y2 = 300;
    float x3 = 800;
    float y3 = 300;
    
    
    float counter = 0;
public:
    void update() {
        if (counter >=  PI){
            isDone = true;
        }
        counter += .05;
        x1 = 550 + 200 * cos(counter);
        y1 = 300 + 200*sin(counter);
        x2 = 600 + 200*cos(counter * 2);
        y2 = 300 + 200*sin(counter*2);
        
    }
    void draw() {
        ofFill();
        ofSetHexColor(0xFF9933);
        ofBeginShape();
        ofVertex(x0,y0);
        ofBezierVertex(x1,y1,x2,y2,x3,y3);
        ofEndShape();

    }
};
