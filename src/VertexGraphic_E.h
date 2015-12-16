#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class VertexGraphic_E : public BaseGraphic {
    
    float xPct, yPct;
    float origx = ofGetViewportWidth() / 2;
    float origy = ofGetViewportHeight() / 2;
    float angle = 0;
    int tips_modifier = abs(ofRandomf() * 5) + 1; 
    
    float counter = 0;
public:
    void update() {
        if (counter >=  PI * .5){
            isDone = true;
        }
        xPct = 3*cos(counter);
        yPct = sin(counter);
        counter += .05;
        
    }
    void draw() {
        int nTips = tips_modifier + xPct * 5;
        int nStarPts = nTips * tips_modifier;
        float angleChangePerPt = TWO_PI / (float)nStarPts;
        float innerRadius = 0 + yPct*80;
        float outerRadius = 80;
        
        
        ofSetColor(ofColor::chocolate);
        ofBeginShape();
        for (int i = 0; i < nStarPts; i++){
          if (i % 2 == 0) {
            // inside point:
            float x = origx + innerRadius * cos(angle);
            float y = origy + innerRadius * sin(angle);
            ofVertex(x,y);
          } else {
            // outside point
            float x = origx + outerRadius * cos(angle);
            float y = origy + outerRadius * sin(angle);
            ofVertex(x,y);
          }
          angle += angleChangePerPt;
        }
        ofEndShape();

        
    }
};
