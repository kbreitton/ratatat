#pragma once

#include <unordered_map>
#include <stdexcept>
#include "ofMain.h"

class SoundHandler {
  
    std::unordered_map<int,ofSoundPlayer> sounds;
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
    ofSoundPlayer V;
    ofSoundPlayer C;
    ofSoundPlayer X;
    ofSoundPlayer Z;
    ofSoundPlayer Q;
    ofSoundPlayer W;
    ofSoundPlayer E;
    ofSoundPlayer R;
    ofSoundPlayer T;
    ofSoundPlayer Y;
    ofSoundPlayer U;
    ofSoundPlayer I;
    ofSoundPlayer O;
    ofSoundPlayer P;

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
        H.load("Clip_H.mp3");
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
        V.load("Clip18.mp3");
        sounds['v'] = V;
        C.load("Clip17.mp3");
        sounds['c'] = C;
        X.load("Clip16.mp3");
        sounds['x'] = X;
        Z.load("Clip19.mp3");
        sounds['z'] = Z;
        Q.load("Clip_Q.mp3");
        sounds['q'] = Q;
        W.load("Clip_W.mp3");
        sounds['w'] = W;
        E.load("Clip_E.aif");
        sounds['e'] = E;
        R.load("Clip_R.wav");
        sounds['r'] = R;
        T.load("Clip_T.mp3");
        sounds['t'] = T;
        Y.load("Clip_Y.mp3");
        sounds['y'] = Y;
        U.load("Clip_U.aif");
        sounds['u'] = U;
        I.load("Clip_I.wav");
        sounds['i'] = I;
        O.load("Clip_O.aif");
        sounds['o'] = O;
        P.load("Clip_P.aif");
        sounds['p'] = P;


        
    }
    void update() {
    }
    void play(int key) {
        try {
          sounds.at(key).play();
        }
        catch (const std::out_of_range& oor) {
        }
    }
};
