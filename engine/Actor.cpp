#include "Actor.h"


Actor::Actor(string name, map<StatEnum, int> statMap) {
    this->name = name;
    this->level = statMap.find(StatEnum::LEVEL)->second;
    this->maxHp = statMap.find(StatEnum::MAXHP)->second;
    this->hp = this->maxHp;
    this->strength = statMap.find(StatEnum::STRENGTH)->second;
    this->magic = statMap.find(StatEnum::MAGIC)->second;
    this->skill = statMap.find(StatEnum::SKILL)->second;
    this->speed = statMap.find(StatEnum::SPEED)->second;
    this->luck = statMap.find(StatEnum::LUCK)->second;
    this->defence = statMap.find(StatEnum::DEFENCE)->second;
    this->resistance = statMap.find(StatEnum::RESISTANCE)->second;
    this->constitution = statMap.find(StatEnum::CONSTITUTION)->second;
    this->movement = statMap.find(StatEnum::MOVEMENT)->second;
}


Actor::Actor(string characterFile) {}


string Actor::toString() {
    return
        "Name: " + name + ":\n" + 
        "Level: " + to_string(this->level) + "\n" + 
        "HP: " + to_string(this->hp) + "/" + to_string(this->maxHp) + "\n" + 
        "Strength: " + to_string(this->strength) + "\n" + 
        "Magic: " + to_string(this->magic) + "\n" + 
        "Skill: " + to_string(this->skill) + "\n" + 
        "Speed: " + to_string(this->speed) + "\n" + 
        "Luck: " + to_string(this->luck) + "\n" + 
        "Defence: " + to_string(this->defence) + "\n" + 
        "Resistance: " + to_string(this->resistance) + "\n" + 
        "Constitution: " + to_string(this->constitution) + "\n" + 
        "Weight: " + to_string(this->weight) + "\n" + 
        "Movement: " + to_string(this->movement) + "\n"
    ;
}


char Actor::getDisplayCharacter() {
    return this->displayCharacter;
}


void Actor::setDisplayCharacter(char displayCharacter) {
    this->displayCharacter = displayCharacter;
}


string Actor::getName() {
    return this->name;
}


int Actor::getHp() {
    return this->hp;
}


int Actor::getMaxHp() {
    return this->maxHp;
}


int Actor::getStrength() {
    return this->strength;
}


int Actor::getMagic() {
    return this->magic;
}


int Actor::getSkill() {
    return this->skill;
}


int Actor::getSpeed() {
    return this->speed;
}


int Actor::getLuck() {
    return this->luck;
}


int Actor::getDefence() {
    return this->defence;
}


int Actor::getResistance() {
    return this->resistance;
}


int Actor::getConstitution() {
    return this->constitution;
}


int Actor::getWeight() {
    return this->weight;
}


int Actor::getMovement() {
    return this->movement;
}


void Actor::setEquippedItemIndex(int equippedItemIndex) {
    this->equippedItemIndex = equippedItemIndex;
}


void Actor::levelUp() {
    this->level++;
    //Do leveling up of stats
}


void Actor::calculateDamage() {
    //CALCULATE DAMAGE
}


void Actor::takeDamage(int damageTaken) {
    if (this->hp - damageTaken >= 0) {
        this->hp -= damageTaken;
    }
    else {
        this->hp = 0;
    }
}


void Actor::heal(int healAmount) {
    if (this->hp + healAmount <= this->maxHp) {
        this->hp += healAmount;
    }
    else {
        this->hp = maxHp;
    }
}