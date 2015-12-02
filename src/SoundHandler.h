#pragma once

#include <map>
#include "ofMain.h"

class SoundHandler {
  
    std::map<int,ofSoundPlayer> sounds;
    ofSoundPlayer L;
    ofSoundPlayer J;
    ofSoundPlayer S;
    

public:
    void setup() {
        L.load("Ambient_L.mp3");
        sounds['l'] =  L;
        J.load("Clip1.mp3");
        sounds['j'] = J;
        S.load("Clip3.mp3");
        sounds['s'] = S;
    }
    void update() {
    }
    void play(int key) {
        sounds[key].play();
    }
};
