#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_Q : public BaseGraphic {
    float radius = 50;
    int x = rand() % ofGetViewportWidth() + 150;
    int y = rand() % ofGetViewportHeight() + 150;
    float counter = 0;
    int color = rand() % 55 + 100;
    ofColor background_color;
    bool isDraw = false;
    
public:
    void update() {
        
        if (counter > 60) {
          isDone = true;
        }
        float rand_num = ofRandomf();
        if (rand_num > -0.75) {
          isDraw = true;
        } else {
          isDraw = false;
        }
        background_color = ofGetBackgroundColor();
        counter++;
    }
    void draw() {
        
        if(isDraw) {
          ofSetColor(255- color * 2,255 - color * .5,255 - color);
        } else {
          ofSetColor(background_color);
        }
        ofFill();
        ofDrawCircle(x, y, radius);
    }
};
