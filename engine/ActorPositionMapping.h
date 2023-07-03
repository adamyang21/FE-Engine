#include <map>
#include <vector>
#include "Actor.h"
#include "Location.h"
using namespace std;

#ifndef ACTOR_POSITION_MAPPING_H
#define ACTOR_POSITION_MAPPING_H

class ActorPositionMapping {
    //ATTRIBUTES
    private: map<Location, Actor> locationToActor;
    private: map<Actor, Location> actorToLocation;
    private: Actor player;

    

    //METHODS
    public: ActorPositionMapping();
    public: void setPlayer(Actor player);
    public: void addActor(Actor actor, Location location);
    public: void removeActor(Actor actor);
    public: void moveActor(Actor actor, Location newLocation);
    public: bool contains(Actor actor);
    public: Actor getActorAt(Location location);
    public: Location getActorLocation(Actor actor);
    
    class ActorIterator {
        private: map<Actor, Location>::iterator it;

        public: ActorIterator(map<Actor, Location>::iterator iterator);
        public: ActorIterator& operator++();
        public: const Actor& operator*() const;
        public: bool operator==(const ActorIterator& other) const;
        public: bool operator!=(const ActorIterator& other) const;
    };
    ActorIterator begin();
    ActorIterator end();
    //public: void iterateActors();
};

#endif