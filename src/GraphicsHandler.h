#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"
#include "CircleGraphic_L.h"
#include <list>

class GraphicsHandler {
    
    std::list<BaseGraphic> graphics;
    typedef std::<unique_ptr> GraphicsPtr;

public:
    GraphicsHandler();
    void update() {

        for (auto it = graphics.begin(); it != graphics.end(); it++) {
            (*it).update();
            if ((*it).isDone) {
                graphics.erase(it);
            }
        }
    }
    void draw(){
        for (auto it = graphics.begin(); it != graphics.end(); it++) {
            (*it).draw();
        }

    }
    
    void addGraphic(int key) {
        switch (key) {
            case 'l' :
                graphics.push_back(new CircleGraphic_L());
                break;
        }
    }

};
