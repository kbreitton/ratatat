#pragma once

#include <list>
#include <memory>
#include "ofMain.h"
#include "BaseGraphic.h"
#include "CircleGraphic_L.h"
#include "CircleGraphic_K.h"
#include "CircleGraphic_J.h"
#include "TriangleGraphic_H.h"
#include "CircleGraphic_G.h"
#include "StripeGraphic_F.h"
#include "EllipseGraphic_D.h"
#include "CirclesGraphic_S.h"
#include "CirclesGraphic_A.h"
#include "LineGraphic_M.h"
#include "LineGraphic_N.h"
#include "RectangleGraphic_B.h"
#include "CircleGraphic_V.h"
#include "CirclesGraphic_C.h"


// Space bar is for background change

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
                graphics.push_back(GraphicsPtr(new CircleGraphic_G()));
                break;
            case ' ' :
                ofBackground(200 + rand() % 55,200 + rand() % 55,200 + rand() % 55);
                // Change to make color changes softer/less extreme
                break;
            case 'f' :
                graphics.push_back(GraphicsPtr(new StripeGraphic_F()));
                break;
            case 'd' :
                graphics.push_back(GraphicsPtr(new EllipseGraphic_D()));
                break;
            case 's' :
                graphics.push_back(GraphicsPtr(new CirclesGraphic_S()));
                break;
            case 'a' :
                graphics.push_back(GraphicsPtr(new CirclesGraphic_A()));
                break;
            case 'm' :
                graphics.push_back(GraphicsPtr(new LineGraphic_M()));
                break;
            case 'n' :
                graphics.push_back(GraphicsPtr(new LineGraphic_N()));
                break;
            case 'b' :
                graphics.push_back(GraphicsPtr(new RectangleGraphic_B()));
                break;
            case 'v' :
                graphics.push_back(GraphicsPtr(new CircleGraphic_V()));
                break;
            case 'c' :
                graphics.push_back(GraphicsPtr(new CirclesGraphic_C()));
                break;
        }
    }
};
