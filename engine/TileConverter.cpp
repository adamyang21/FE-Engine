#include "TileConverter.h"


Tile* getTile(char tileCharacter, int height) {
    switch (tileCharacter) {
        case '.':
            return new Ground(height);
        default:
            return NULL;
    }
}