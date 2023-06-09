#include <string>
using namespace std;

#ifndef TILE_H
#define TILE_H

class Tile {
    protected: char displayCharacter;
    protected: bool collision;
    protected: int height;

    public: Tile(char DisplayCharacter, int height);
    public: char getDisplayCharacter();
    public: bool getCollision();
    public: int getHeight();
    public: virtual void tick() = 0;
};

#endif