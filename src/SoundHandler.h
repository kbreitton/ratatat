#pragma once

#include <map>
#include "ofMain.h"

class SoundHandler {
  
    std::map<int,ofSoundPlayer> sounds;
    ofSoundPlayer L;
    ofSoundPlayer J;
    ofSoundPlayer S;
    ofSoundPlayer M;
    ofSoundPlayer G;
    ofSoundPlayer K;
    

public:
    void setup() {
        L.load("Ambient_L.mp3");
        sounds['l'] =  L;
        J.load("Clip1.mp3");
        sounds['j'] = J;
        M.load("Clip7.mp3");
        sounds['m'] = M;
        S.load("Clip3.mp3");
        sounds['s'] = S;
        G.load("Clip8.mp3");
        sounds['g'] = G;
        K.load("Clip9.mp3");
        sounds['k'] = K;
        
    }
    void update() {
    }
    void play(int key) {
        sounds[key].play();
    }
};
