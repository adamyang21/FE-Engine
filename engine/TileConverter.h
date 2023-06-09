#include <string>
#include "Tile.h"
#include "../tiles/Ground.h"
using namespace std;

#ifndef TILE_CONVERTER_H
#define TILE_CONVERTER_H

Tile* getTile(char tileCharacter, int height);

#endif