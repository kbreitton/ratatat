#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"
#include "CircleGraphic_L.h"
#include "CircleGraphic_K.h"
#include "CircleGraphic_J.h"

#include "TriangleGraphic_H.h"

#include <list>
#include <memory>

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
            case 'k' :
                graphics.push_back(GraphicsPtr(new CircleGraphic_K()));
                break;
            case 'j' :
                graphics.push_back(GraphicsPtr(new CircleGraphic_J()));
                break;
            case 'h' :
                graphics.push_back(GraphicsPtr(new TriangleGraphic_H()));
                break;
            case 'g' :
                ofBackground(rand() % 255,rand() % 255,rand() % 255);
                // Change to make color changes softer/less extreme
                break;
        }
    }
};
