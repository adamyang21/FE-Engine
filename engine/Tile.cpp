#include "Tile.h"


Tile::Tile(char displayCharacter, int height) {
    this->displayCharacter = displayCharacter;
    this->height = height;
}


char Tile::getDisplayCharacter() {
    return this->displayCharacter;
}


bool Tile::getCollision() {
    return this->collision;
}


int Tile::getHeight() {
    return this->height;
}