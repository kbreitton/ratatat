#pragma once

#include <list>
#include <memory>
#include "ofMain.h"
#include "BaseGraphic.h"
#include "CircleGraphic_L.h"
#include "CircleGraphic_K.h"
#include "CircleGraphic_J.h"
#include "TriangleGraphic_H.h"
// g is for background change so it does not have a class
#include "StripeGraphic_F.h"
#include "EllipseGraphic_D.h"

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
                ofBackground(200 + rand() % 55,200 + rand() % 55,200 + rand() % 55);
                // Change to make color changes softer/less extreme
                break;
            case 'f' :
                graphics.push_back(GraphicsPtr(new StripeGraphic_F()));
                break;
            case 'd' :
                graphics.push_back(GraphicsPtr(new EllipseGraphic_D()));
                break;
        }
    }
};
