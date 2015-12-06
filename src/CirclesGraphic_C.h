
#include "ofMain.h"
#include "BaseGraphic.h"

class CirclesGraphic_C : public BaseGraphic {
    int x1 = rand()%300 + 100;
    int x2 = rand()%300 + 400;
    int y1 = rand()%300 + 100;
    int y2 = rand()%300 + 400;
    int r1 = 10;
    int r2 = 10;
    //int r3 = (rand() % 200 - 100) * 2;
    //int r4 = (rand() % 200 - 100) * 2;
    
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
        } else {
            r1 -= 10 ;
            r2 -= 10 ;
        }
        if (r1 < 0) {
            r1 = 0;
        }
        if (r2 < 0) {
            r2 = 0;
        }
        counter++;
    }
    void draw() {
        
        ofFill();
        ofSetColor(0,255,255);
        ofDrawCircle(x1,y1,r1);
        ofSetColor(0,0,255);
        ofDrawCircle(x2,y2,r2);
        ofNoFill();
        ofSetColor(0,0,0);
        ofDrawCircle(x1,y1,r1 + 15);
        ofSetColor(0,0,0);
        ofDrawCircle(x2 ,y2 ,r2+ 15);
        
    }
};

