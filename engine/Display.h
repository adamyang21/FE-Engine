#include <string>
#include <iostream>
using namespace std;

#ifndef DISPLAY_H
#define DISPLAY_H

#include "GameMap.h"

class Display {
    private: GameMap gameMap;

    public: Display();
    public: string tick();
};

#endif