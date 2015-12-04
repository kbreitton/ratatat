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
    ofSoundPlayer H;
    ofSoundPlayer _;
    ofSoundPlayer F;
    ofSoundPlayer D;
    ofSoundPlayer A;
    ofSoundPlayer N;
    ofSoundPlayer B;
    

public:
    void setup() {
        L.load("Ambient_L.mp3");
        sounds['l'] =  L;
        J.load("Clip1.mp3");
        sounds['j'] = J;
        M.load("Clip7.mp3");
        sounds['m'] = M;
        G.load("Clip8.mp3");
        sounds['g'] = G;
        K.load("Clip9.mp3");
        sounds['k'] = K;
        H.load("LilJon.mp3");
        sounds['h'] = H;
        _.load("Clip2.mp3");
        sounds[' '] = _;
        F.load("Clip10.mp3");
        sounds['f'] = F;
        D.load("Clip11.mp3");
        sounds['d'] = D;
        A.load("Clip12.mp3");
        sounds['a'] = A;
        N.load("Clip13.mp3");
        sounds['n'] = N;
        B.load("Clip14.mp3");
        sounds['b'] = B;
        S.load("Clip15.mp3");
        sounds['s'] = S;
        
    }
    void update() {
    }
    void play(int key) {
        sounds[key].play();
    }
};
