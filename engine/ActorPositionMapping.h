#include <map>
#include "Actor.h"
#include "Tile.h"
using namespace std;


class ActorPositionMapping {
    private: map<Tile, Actor> tileToActor;
    private: map<Actor, Tile> actorToTile;
    private: Actor player;
};