//
//  BaseGraphic.h
//  emptyExample
//
//  Created by Jack Kearney on 11/24/15.
//
//
#pragma once

#include "ofMain.h"

class BaseGraphic {
    
    public :
        //BasGraphic();
        bool isDone = false;
        //virtual void setup();
        virtual void draw() {};
        virtual void update() {};
    
};
