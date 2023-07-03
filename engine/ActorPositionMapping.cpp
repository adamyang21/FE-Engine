#include "ActorPositionMapping.h"


ActorPositionMapping::ActorPositionMapping() {
    this->locationToActor = map<Location, Actor>();
    this->actorToLocation = map<Actor, Location>();
}


void ActorPositionMapping::setPlayer(Actor player) {
    this->player = player;
}


void ActorPositionMapping::addActor(Actor actor, Location location) {
    if (actorToLocation.count(actor) > 0) {
        throw runtime_error("Cannot add an actor that already exists.");
    }
    if (locationToActor.count(location) > 0) {
        throw runtime_error("Cannot add a location that already exists.");
    }
    actorToLocation[actor] = location;
    locationToActor[location] = actor;
}


void ActorPositionMapping::removeActor(Actor actor) {
    Location location = actorToLocation[actor];
    actorToLocation.erase(actor);
    locationToActor.erase(location);
}


void ActorPositionMapping::moveActor(Actor actor, Location newLocation) {
    if (locationToActor.count(newLocation) > 0) {
        throw runtime_error("Cannot move actor to a location with another existing actor.");
    }

    Location oldLocation = actorToLocation[actor];
    actorToLocation[actor] = newLocation;
    locationToActor.erase(oldLocation);
    locationToActor[newLocation] = actor;
}


bool ActorPositionMapping::contains(Actor actor) {
    return actorToLocation.count(actor) > 0;
}


Actor ActorPositionMapping::getActorAt(Location location) {
    return locationToActor[location];
}


Location ActorPositionMapping::getActorLocation(Actor actor) {
    return actorToLocation[actor];
}


ActorPositionMapping::ActorIterator::ActorIterator(map<Actor, Location>::iterator iterator) : it(iterator) {}


ActorPositionMapping::ActorIterator& ActorPositionMapping::ActorIterator::operator++() {
    ++it;
    return *this;
}


const Actor& ActorPositionMapping::ActorIterator::operator*() const {
    return it->first;
}


bool ActorPositionMapping::ActorIterator::operator==(const ActorIterator& other) const {
    return it == other.it;
}


bool ActorPositionMapping::ActorIterator::operator!=(const ActorIterator& other) const {
    return !(*this == other);
}


ActorPositionMapping::ActorIterator ActorPositionMapping::begin() {
    return ActorIterator(actorToLocation.begin());
}


ActorPositionMapping::ActorIterator ActorPositionMapping::end() {
    return ActorIterator(actorToLocation.end());
}