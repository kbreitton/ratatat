/*
 There are better / cleaner ways of doing this but
 it works pretty well through brute force.
 */
#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class LineGraphic_N : public BaseGraphic {
    float counter = 0;
    ofBoxPrimitive box;
public:
    void update() {
        if (counter >= 10) {
            isDone = true;
        }
        counter += 0.05f;
       
    }
    
    void draw() {
        box.setSideColor(0,50);
        box.setPosition(ofGetWidth()*.2, ofGetHeight()*.75, 0);
        box.setPosition(ofGetWidth()*.2, ofGetHeight()*.75, 0);
        
        vector<ofMeshFace> triangles = box.getMesh().getUniqueFaces();
        
        box.draw();
    }
    
};
