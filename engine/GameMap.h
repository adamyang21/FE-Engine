#include <string>
using namespace std;

#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "Tile.h"
#include "TileConverter.h"
#include "Actor.h"


class Location;

/**
 * @brief Class for storing the game map, and tracking the tiles and actors.
 * @author adamyang21
 */
class GameMap {
    //ATTRIBUTES
    /**
     * @brief 2D array containing tiles which make up the game map.
     */
    protected: Tile*** map; //***, one for abstract, two for 2D array.

    /**
     * @brief The width of the current map.
     */
    protected: int width;

    /**
     * @brief The height of the current map.
     */
    protected: int height;

    //protected: ActorPositionMapping actorPositions;



    //METHODS
    /**
     * @brief Constructor for GameMap, which interprets an array of strings representing the game map.
     * @param mapStrings array of strings which represent the game map.
     */
    public: GameMap(string* mapStrings);

    /**
     * @brief Constructor for GameMap, which creates a map of given width and height, filled with a given type of tile.
     * @param width width of the map.
     * @param height height of the map.
     * @param tileCharacter type of tile to fill the map with given as a character.
     */
    public: GameMap(int width, int height, char tileCharacter);

    /**
     * @brief Constructor for GameMap, which interprets an external file to create the game map.
     * @param mapFile path to external file.
     */
    public: GameMap(string mapFile);

    /**
     * @brief Creates the game map from given array of strings.
     * @param mapStrings array of strings which represent the game map.
     */
    public: void createMapFromStrings(string* mapStrings);

    /**
     * @brief Stringifies the game map so that it can be displayed in console.
     * @return stringified game map.
     */
    public: string toString();

    /**
     * @brief Accessor method that gets a pointer to the Tile instance at the given coordinates.
     * @param x x-coordinate.
     * @param y y-coordinate.
     * @return pointer to the Tile instance at the given coordinates.
     */
    public: Tile* getTileAt(int x, int y);

    /**
     * @brief Mutator method that sets a Tile instance to the given coordinates.
     * @param x x-coordinate.
     * @param y y-coordinate.
     * @return tile tile instance to set at the given coordinates.
     */
    public: void setTileAt(int x, int y, Tile* tile);

    public: Actor getActorAt(Location location);
    public: void addActor(Actor actor, Location location);
    public: void removeActor(Actor actor);
    public: void locationHasActor(Location location);
    public: void moveActor(Actor actor, Location location);
    public: Location getLocationOfActor(Actor actor);
    public: bool hasActor(Location location);

    /**
     * @brief Method that is called once per action, which adds time dependence.
     */
    public: void tick();
};

#endif