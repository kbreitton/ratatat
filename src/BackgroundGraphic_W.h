#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class BackgroundGraphic_W : public BaseGraphic {
    float counter = 0;
    bool isDraw = false;
    ofColor orig_background_color = ofGetBackgroundColor();

public:
    void update() {
        
        if (counter > 20) {
          isDone = true;
          ofSetBackgroundColor(orig_background_color);
        }
        float rand_num = ofRandomf();
        if (rand_num > 0) {
          isDraw = true;
        } else {
          isDraw = false;
        }
        counter++;
    }
    void draw() {
        
        if(isDraw) {
          ofSetBackgroundColor(ofColor::white);
        } else {
          ofSetBackgroundColor(orig_background_color);
        }
    }
};
