#include <string>
using namespace std;

#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "Tile.h"
#include "TileConverter.h"

class GameMap {
    protected: Tile*** map; //***, one for abstract, two for 2D array.
    protected: int width;
    protected: int height;
    //protected: ActorLocationsIterator actorLocations;

    public: GameMap(string* mapStrings);
    public: GameMap(int width, int height, char tileCharacter);
    public: GameMap(string mapFile);
    public: void createMapFromStrings(string* mapStrings);
    public: string toString();
    public: Tile* getTileAt(int x, int y);
    public: void setTileAt(int x, int y, Tile* tile);
    //public: Actor getActorAt(Tile tile);
    //public: void addActor(Actor actor, Tile tile);
    //public: void removeActor(Actor actor);
    //public: void moveActor(Actor actor, Tile tile);
    //public: Tile getLocationOfActor(Actor actor);
    //public: bool hasActor(Tile tile);
    public: void tick();
};

#endif