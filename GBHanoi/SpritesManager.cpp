// author: chris-scientist
// created at: 26/09/2018
// updated at: 01/10/2018

#include "SpritesManager.h"

bool SpritesManager::finishFlagInitialized = false;
Image SpritesManager::finishFlag;
bool SpritesManager::towerInitialized = false;
Image SpritesManager::tower;
bool SpritesManager::ring1Initialized = false;
Image SpritesManager::ring1;
bool SpritesManager::ring2Initialized = false;
Image SpritesManager::ring2;
bool SpritesManager::ring3Initialized = false;
Image SpritesManager::ring3;
bool SpritesManager::ring4Initialized = false;
Image SpritesManager::ring4;
bool SpritesManager::ring5Initialized = false;
Image SpritesManager::ring5;
bool SpritesManager::ring6Initialized = false;
Image SpritesManager::ring6;
bool SpritesManager::ring7Initialized = false;
Image SpritesManager::ring7;
bool SpritesManager::startFlagInitialized = false;
Image SpritesManager::startFlag;

// Récupérer l'image du drapeau
Image& SpritesManager::getFinishFlag() {
  if(! SpritesManager::finishFlagInitialized) {
    static const uint16_t finishFlagData[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0x0,0xffff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0x0,0xffff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0x0,0xffff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::finishFlag = Image(finishFlagData);
    SpritesManager::finishFlagInitialized = true;
  }
  return SpritesManager::finishFlag;
}

// Récupérer l'image d'une tour vide
Image& SpritesManager::getTower() {
  if(! SpritesManager::towerInitialized) {
    static const uint16_t towerData[] = {
      26, 29, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xfd42,0xfd42,0xfd42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xcc68,0xcc68,0x5268,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,
      0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,
      0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,
      0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::tower = Image(towerData);
    SpritesManager::towerInitialized = true;
  }
  return SpritesManager::tower;
}

// Récupérer l'image de l'anneau 1
Image& SpritesManager::getRing1() {
  if(! SpritesManager::ring1Initialized) {
    static const uint16_t ring1Data[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::ring1 = Image(ring1Data);
    SpritesManager::ring1Initialized = true;
  }
  return SpritesManager::ring1;
}

// Récupérer l'image de l'anneau 2
Image& SpritesManager::getRing2() {
  if(! SpritesManager::ring2Initialized) {
    static const uint16_t ring2Data[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::ring2 = Image(ring2Data);
    SpritesManager::ring2Initialized = true;
  }
  return SpritesManager::ring2;
}

// Récupérer l'image de l'anneau 3
Image& SpritesManager::getRing3() {
  if(! SpritesManager::ring3Initialized) {
    static const uint16_t ring3Data[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::ring3 = Image(ring3Data);
    SpritesManager::ring3Initialized = true;
  }
  return SpritesManager::ring3;
}

// Récupérer l'image de l'anneau 4
Image& SpritesManager::getRing4() {
  if(! SpritesManager::ring4Initialized) {
    static const uint16_t ring4Data[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::ring4 = Image(ring4Data);
    SpritesManager::ring4Initialized = true;
  }
  return SpritesManager::ring4;
}

// Récupérer l'image de l'anneau 5
Image& SpritesManager::getRing5() {
  if(! SpritesManager::ring5Initialized) {
    static const uint16_t ring5Data[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x0,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::ring5 = Image(ring5Data);
    SpritesManager::ring5Initialized = true;
  }
  return SpritesManager::ring5;
}

// Récupérer l'image de l'anneau 6
Image& SpritesManager::getRing6() {
  if(! SpritesManager::ring6Initialized) {
    static const uint16_t ring6Data[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::ring6 = Image(ring6Data);
    SpritesManager::ring6Initialized = true;
  }
  return SpritesManager::ring6;
}

// Récupérer l'image de l'anneau 7
Image& SpritesManager::getRing7() {
  if(! SpritesManager::ring7Initialized) {
    static const uint16_t ring7Data[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0xfd42,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0xfd42,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0x5268,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x5268,0x0,0x0,0x0,0x0
    };
    SpritesManager::ring7 = Image(ring7Data);
    SpritesManager::ring7Initialized = true;
  }
  return SpritesManager::ring7;
}

// Récupérer l'image d'un anneau en fonction de son index
Image& SpritesManager::getRing(const int aIndexOfRing) {
  switch(aIndexOfRing) {
    case RING_1:
      return SpritesManager::getRing1();
    break;
    case RING_2:
      return SpritesManager::getRing2();
    break;
    case RING_3:
      return SpritesManager::getRing3();
    break;
    case RING_4:
      return SpritesManager::getRing4();
    break;
    case RING_5:
      return SpritesManager::getRing5();
    break;
    case RING_6:
      return SpritesManager::getRing6();
    break;
    case RING_7:
      return SpritesManager::getRing7();
    break;
  }
}

Image& SpritesManager::getStartFlag() {
  if(! SpritesManager::startFlagInitialized) {
    static const uint16_t startFlagData[] = {
      26, 3, 1, 0, 0, 0, 
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0xffff,0xffff,0xffff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0x0,0x0,0xffff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
      0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0xffff,0xffff,0xffff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
    };
    SpritesManager::startFlag = Image(startFlagData);
    SpritesManager::startFlagInitialized = true;
  }
  return SpritesManager::startFlag;
}

