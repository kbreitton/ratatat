/*
 There are better / cleaner ways of doing this but 
 it works pretty well through brute force.
 */
#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class LineGraphic_M : public BaseGraphic {
    float x1 = 400;
    float y1 = 400;
    float x2 = 400;
    float y2 = 400;
    float dx = 0;
    float dy = 0;
    float dx2 = 0;
    float dy2 = 0;
    float dx3 = 0;
    float dy3 = 0;
    float dx4 = 0;
    float dy4 = 0;
    float dx5 = 0;
    float dy5 = 0;
    float dx6 = 0;
    float dy6 = 0;
    float radius = 5;
    float PI_over_2 = PI / 2;
    float PI_over_3 = PI / 3;
    float PI_over_6 = PI / 6;
    float counter = PI_over_2;
    
public:
    void update() {
        if (counter >= (PI_over_2 * 3) + PI_over_6) {
            isDone = true;
        }
        
        dy  =   cos(counter) * 200;
        dx  = - sin(counter) * 200;
        dx2 =   cos(PI_over_2 - counter) * 200;
        dy2 = - sin(PI_over_2 - counter) * 200;
        
        dy3  =   cos(counter - PI_over_6 * .5) * 200;
        dx3  = - sin(counter - PI_over_6 * .5) * 200;
        dx4 =   cos(PI_over_2 - counter + PI_over_6 * .5) * 200;
        dy4 = - sin(PI_over_2 - counter + PI_over_6 * .5) * 200;
        
        dy5  =   cos(counter - PI_over_6) * 200;
        dx5  = - sin(counter - PI_over_6) * 200;
        dx6 =   cos(PI_over_2 - counter + PI_over_6) * 200;
        dy6 = - sin(PI_over_2 - counter + PI_over_6) * 200;
        
        counter += 0.09;
    }
    
    void draw() {
        ofSetColor(0,0,0);
        ofFill();
        ofSetLineWidth(2);

        if (counter <= (PI_over_2 * 3)) {
            ofDrawLine(x1 + dx, y1 + dy, x2 + dx, y2 - dy);
            ofDrawCircle(x1 + dx,y1 + dy,radius);
            ofDrawCircle(x2 + dx,y2 - dy,radius);
            ofDrawLine(x1 + dx2, y1 + dy2, x2 + dx2, y2 - dy2);
            ofDrawCircle(x1 + dx2,y1 + dy2,radius);
            ofDrawCircle(x2 + dx2,y2 - dy2,radius);
        }
        if ((counter >= PI_over_6 * .5 + PI_over_2 ) &&
                counter <= (PI_over_2 * 3) + PI_over_6*.5) {
            ofDrawLine(x1 + dx3, y1 + dy3, x2 + dx3, y2 - dy3);
            ofDrawCircle(x1 + dx3,y1 + dy3,radius);
            ofDrawCircle(x2 + dx3,y2 - dy3,radius);
            ofDrawLine(x1 + dx4, y1 + dy4, x2 + dx4, y2 - dy4);
            ofDrawCircle(x1 + dx4,y1 + dy4,radius);
            ofDrawCircle(x2 + dx4,y2 - dy4,radius);
        }
        if (counter >= PI_over_6 + PI_over_2) {
            ofDrawLine(x1 + dx5, y1 + dy5, x2 + dx5, y2 - dy5);
            ofDrawCircle(x1 + dx5,y1 + dy5,radius);
            ofDrawCircle(x2 + dx5,y2 - dy5,radius);
            ofDrawLine(x1 + dx6, y1 + dy6, x2 + dx6, y2 - dy6);
            ofDrawCircle(x1 + dx6,y1 + dy6,radius);
            ofDrawCircle(x2 + dx6,y2 - dy6,radius);
        }
    }
};
