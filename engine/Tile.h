#include <string>
using namespace std;

#ifndef TILE_H
#define TILE_H

/**
 * @brief Abstract class for representing a position on the map.
 * @author adamyang21
 */
class Tile {
    //ATTRIBUTES
    /**
     * @brief Character used to display the type of tile.
     */
    protected: char displayCharacter;

    /**
     * @brief Whether the tile is considered a piece of blocking collision.
     */
    protected: bool collision;

    /**
     * @brief The "height" of the tile, which is used when considering ledges.
     */
    protected: int height;



    //METHODS
    /**
     * @brief Constructor for Tile.
     * @param displayCharacter character used to represent the tile.
     * @param height height of the tile.
     */
    public: Tile(char displayCharacter, int height);

    /**
     * @brief Accessor method for the display character.
     * @return the display character used to rperesent the tile.
     */
    public: char getDisplayCharacter();

    /**
     * @brief Accessor method for the collision.
     * @return whether the tile is considered to be a blocking collision or not.
     */
    public: bool getCollision();

    /**
     * @brief Accessor method for getting the "height".
     * @return the height of the tile.
     */
    public: int getHeight();

    /**
     * @brief Abstract method for how the tile interacts at each action.
     */
    public: virtual void tick() = 0;
};

#endif