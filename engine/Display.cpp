#include "Display.h"


Display::Display() : gameMap(20, 8, '.') {};


string Display::tick() {
    this->gameMap.tick();
    return this->gameMap.toString() + "\n";
}