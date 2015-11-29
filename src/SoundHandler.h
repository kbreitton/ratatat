#pragma once

#include <map>
#include "ofMain.h"

class SoundHandler {
  
  std::map<int,ofSoundPlayer> sounds;
  ofSoundPlayer L;

public:
  void setup() {
    L.load("Ambient_L.mp3");
    sounds['l'] =  L;
  }
  void update() {
  }
  void play(int key) {
    sounds[key].play();
  }
};
