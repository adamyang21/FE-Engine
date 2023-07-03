#include "Location.h"
#include "GameMap.h"


Location::Location() {}


Location::Location(GameMap* map, int x, int y) {
    this->map = map;
    this->x = x;
    this->y = y;
}


GameMap* Location::getMap() {
    return this->map;
}


int Location::getX() {
    return this->x;
}


int Location::getY() {
    return this->y;
}


Tile* Location::getTile() {
    return this->tile;
}


void Location::setTile(Tile* tile) {
    this->tile = tile;
}


bool Location::containsActor(Actor actor) {
    // return map.count(actor) > 0;
    return false;
}


bool Location::operator<(const Location& other) const {
    return false;
}


bool Location::operator>(const Location& other) const {
    return false;
}