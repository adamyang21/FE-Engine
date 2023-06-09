#include <string>
#include "Tile.h"
#include "../tiles/Ground.h"
using namespace std;

#ifndef TILE_CONVERTER_H
#define TILE_CONVERTER_H

/**
 * @brief Function used to convert a tile character into a Tile instance.
 * 
 * @param tileCharacter the character representing the tile.
 * @param height the height to set the Tile.
 * @return Tile* the reference to the new tile instance.
 */
Tile* getTile(char tileCharacter, int height);

#endif