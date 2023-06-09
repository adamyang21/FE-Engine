#include "Ground.h"


Ground::Ground(int height) : Tile('.', height) {
    this->height = height;
}


void Ground::tick() {}