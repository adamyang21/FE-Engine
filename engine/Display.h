#include <string>
#include <iostream>
using namespace std;

#ifndef DISPLAY_H
#define DISPLAY_H

#include "GameMap.h"


/**
 * @brief Class for displaying the game and taking inputs.
 * @author adamyang21
 */
class Display {
    //ATTRIBUTES
    /**
     * @brief Currently running game map.
     */
    private: GameMap gameMap;



    //METHODS
    /**
     * @brief Constructor for Display.
     */
    public: Display();

    /**
     * @brief Method run at every action.
     * @return stringified game map to be displayed on the console.
     */
    public: string tick();
};

#endif