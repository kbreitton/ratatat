#pragma once

#include <list>
#include <memory>
#include "ofMain.h"
#include "BaseGraphic.h"
#include "CircleGraphic_L.h"


class GraphicsHandler {
    
    typedef std::unique_ptr<BaseGraphic>  GraphicsPtr;
    std::list<GraphicsPtr> graphics;

public:
    //GraphicsHandler();
    void update() {
       
        for (auto it = graphics.begin(); it != graphics.end(); it++) {
            (*it)->update();
            if ((*it)->isDone) {
                  it = graphics.erase(it);
            }

        }
    }

    void draw(){
        for (auto it = graphics.begin(); it != graphics.end(); it++) {
            (*it)->draw();
        }

    }
    
    void addGraphic(int key) {
        switch (key) {
            case 'l' :
                graphics.push_back(GraphicsPtr(new CircleGraphic_L()));
                break;
        }
    }

};
