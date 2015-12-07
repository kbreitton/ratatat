
#include "ofMain.h"
#include "BaseGraphic.h"

class CirclesGraphic_C : public BaseGraphic {
    int x1 = rand()%300 + 100;
    int x2 = rand()%300 + 400;
    int x3 = rand()%300 + 250;
    int y1 = rand()%300 + 50;
    int y2 = rand()%300 + 200;
    int y3 = rand()%300 + 400;
    int r1 = 5 + rand() % 10;
    int r2 = 8 + rand()% 4;
    int r3 = 5 + rand() % 10;
    //int r3 = (rand() % 200 - 100) * 2;
    //int r4 = (rand() % 200 - 100) * 2;
    int w = rand() % 4 + 1;
    float radius = 20;
    float counter = 0;
    
public:
    void update() {
        if (r1 <= 0 && r2 <= 0){
            isDone = true;
        }
        if (counter <= 10) {
            r1 += 10;
            r2 += 10;
            r3 += 10 ;
        } else {
            r1 -= 10 ;
            r2 -= 10 ;
            r3 -= 10 ;
        }
        if (r1 < 0) {
            r1 = 0;
        }
        if (r2 < 0) {
            r2 = 0;
        }
        if (r3 < 0) {
            r3 = 0;
        }
        counter++;
    }
    void draw() {
        
        ofFill();
        ofSetColor(0,255,255);
        ofDrawCircle(x1,y1,r1);
        ofSetColor(0,0,255);
        ofDrawCircle(x2,y2,r2);
        ofSetColor(255,0,255);
        ofDrawCircle(x3,y3,r3);
        ofNoFill();
        ofSetLineWidth(w);
        ofSetColor(0,0,0);
        ofDrawCircle(x1,y1,r1 + 15);
        ofDrawCircle(x2,y2,r2 + 15);
        ofDrawCircle(x3,y3,r3 + 15);
        
    }
};

