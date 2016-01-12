#pragma once

#include "ofMain.h"

class BaseGraphic {
    
    public :
        //BasGraphic();
        bool isDone = false;
        //virtual void setup();
        virtual void draw() = 0;
        virtual void update() = 0;
    
};
