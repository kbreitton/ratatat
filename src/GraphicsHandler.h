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
#include "CurveGraphic_X.h"
#include "CurveGraphic_Z.h"
#include "CircleGraphic_Q.h"
#include "BackgroundGraphic_W.h"
#include "VertexGraphic_E.h"
#include "StripeGraphic_R.h"
#include "CurveGraphic_T.h"
#include "CircleGraphic_Y.h"
#include "LineGraphic_U.h"
#include "LineGraphic_I.h"
#include "CircleGraphic_O.h"
#include "RectangleGraphic_P.h"


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
            case 'x' :
                graphics.push_back(GraphicsPtr(new CurveGraphic_X()));
                break;
            case 'z' :
                graphics.push_back(GraphicsPtr(new CurveGraphic_Z()));
                break;
            case 'q' :
                graphics.push_back(GraphicsPtr(new CircleGraphic_Q()));
                break;
            case 'w' :
                graphics.push_back(GraphicsPtr(new BackgroundGraphic_W()));
                break;
            case 'e' :
                graphics.push_back(GraphicsPtr(new VertexGraphic_E()));
                break;
            case 'r' :
                graphics.push_back(GraphicsPtr(new StripeGraphic_R()));
                break;
            case 't' :
                graphics.push_back(GraphicsPtr(new CurveGraphic_T()));
                break;
            case 'y' :
                graphics.push_back(GraphicsPtr(new CircleGraphic_Y()));
                break;
            case 'u' :
                graphics.push_back(GraphicsPtr(new LineGraphic_U()));
                break;
            case 'i':
                graphics.push_back(GraphicsPtr(new LineGraphic_I()));
                break;
            case 'o':
                graphics.push_back(GraphicsPtr(new CircleGraphic_O()));
                break;
            case 'p':
                graphics.push_back(GraphicsPtr(new RectangleGraphic_P()));
                break;
        }
    }
};
