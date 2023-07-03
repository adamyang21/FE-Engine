using namespace std;

#ifndef LOCATION_H
#define LOCATION_H

#include "Actor.h"
#include "Tile.h"

class GameMap;

class Location {
    //ATTRIBUTES
    private: GameMap* map;
    private: int x;
    private: int y;
    private: Tile* tile;



    //METHODS
    public: Location();
    public: Location(GameMap* map, int x, int y);
    public: GameMap* getMap();
    public: int getX();
    public: int getY();
    public: Tile* getTile();
    public: void setTile(Tile* tile);
    public: bool containsActor(Actor actor);
    public: Actor getActor();
    public: void addActor(Actor actor);
    //public: MoveActorAction getMoveAction(Actor actor, Direction direction, String hotKey);
    public: bool canActorEnter(Actor actor);
    public: char getDisplayCharacter();

    public: bool operator<(const Location& other) const;
    public: bool operator>(const Location& other) const;
};

#endif