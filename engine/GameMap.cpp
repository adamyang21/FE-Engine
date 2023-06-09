#include "GameMap.h"


GameMap::GameMap(string* mapStrings) {
    createMapFromStrings(mapStrings);
}


GameMap::GameMap(int width, int height, char tileCharacter) {
    this->width = width;
    this->height = height;
    
    this->map = new Tile**[height];
    for (int i = 0; i < height; i++) {
        this->map[i] = new Tile*[width];
        for (int j = 0; j < width; j++) {
            this->map[i][j] = getTile(tileCharacter, 0);
        }
    }
}


GameMap::GameMap(string mapFile) {
    //TO BE IMPLEMENTED
}


void GameMap::createMapFromStrings(string* mapStrings) {
    int width = mapStrings[0].length();
    int height = sizeof(mapStrings)/sizeof(mapStrings[0]);

    this->width = width;
    this->height = height;

    this->map = new Tile**[height];
    for (int i = 0; i < height; i++) {
        this->map[i] = new Tile*[width];
        for (int j = 0; j < width; j++) {
            this->map[i][j] = getTile(mapStrings[i][j], 0);
        }
    }
}


string GameMap::toString() {
    string res = "";
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            res += this->map[i][j]->getDisplayCharacter();
        }
        res += "\n";
    }
    return res;
}


Tile* GameMap::getTileAt(int x, int y) {
    return this->map[y][x];
}


void GameMap::setTileAt(int x, int y, Tile* tile) {
    this->map[y][x] = tile;
}


void GameMap::tick() {
    //Iterate actors.

    //Iterate tiles.
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            this->map[i][j]->tick();
        }
    }
}