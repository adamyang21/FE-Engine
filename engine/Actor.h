#include <string>
#include <map>
#include <../enums/StatEnum.h>
using namespace std;


class Actor {
    //ATTRIBUTES
    /**
     * @brief String representing the name of the actor.
     */
    protected: string name;

    /**
     * @brief Display character used to show the actor's position on the console.
     */
    protected: char displayCharacter;

    /**
     * @brief Current level of the actor.
     * Minimum of level 1 and maximum of level 20. Promotes after levelling at level 20.
     */
    protected: int level;

    /**
     * @brief Current hit points of the actor.
     * Actor dies when this value reaches 0.
     */
    protected: int hp;

    /**
     * @brief Maximum hit points the actor to have.
     */
    protected: int maxHp;

    /**
     * @brief Strength of the actor. Affects physical damage.
     */
    protected: int strength;

    /**
     * @brief Magic of the actor. Affects magic damage.
     */
    protected: int magic;

    /**
     * @brief Skill of the actor. Affects accuracy, critical strike chance, skill activation and item pickup chance.
     */
    protected: int skill;

    /**
     * @brief Speed of the actor. Affects double attacks and dodge chance.
     */
    protected: int speed;

    /**
     * @brief Luck of the actor. Affects accuracy, avoid and critical avoid.
     */
    protected: int luck;

    /**
     * @brief Defence of the actor. Reduces incoming physical damage.
     */
    protected: int defence;

    /**
     * @brief Resistance of the actor. Reduces incoming magic damage.
     */
    protected: int resistance;

    /**
     * @brief Constitution of the actor. Affects ability to hold weapons and shoving.
     */
    protected: int constitution;

    /**
     * @brief Weight of the actor. Affects rescuing and shoving.
     */
    protected: int weight;

    /**
     * @brief Movement of the actor. Determines how many tiles the actor can move in a turn.
     */
    protected: int movement;

    /**
     * @brief Class of the actor. Affects weapon usage and skills.
     */
    //protected: Class class;

    /**
     * @brief Inventory for the actor.
     */
    //protected: Item** inventory;

    /**
     * @brief Index representing which item is equipped.
     */
    protected: int equippedItemIndex;

    //ADD SKILL RELATED STUFF LATER



    //METHODS
    /**
     * @brief Constructor for Actor which accepts a map of values which serve as the actor's stats.
     * @param statMap map containing the base stats of the actor.
     */
    public: Actor(string name, map<StatEnum, int> statMap);


    /**
     * @brief Constructor for Actor which reads values from an external file.
     * @param characterFile path to the character file.
     */
    public: Actor(string characterFile);


    /**
     * @brief Stringifies the actor so that it can be displayed.
     * @return stringified version of the actor.
     */
    public: string toString();


    /**
     * @brief Accessor method for getting the display character of the actor.
     * @return display character of the actor.
     */
    public: char getDisplayCharacter();


    /**
     * @brief Mutator method for display character.
     * @param displayCharacter new display character for the actor.
     */
    protected: void setDisplayCharacter(char displayCharacter);


    /**
     * @brief Accessor method for getting the actor's name.
     * @return the actor's name.
     */
    public: string getName();


    /**
     * @brief Accessor method for getting the actor's level.
     * @return the actor's level.
     */
    public: int getLevel();


    /**
     * @brief Accessor method for getting the actor's current hit points.
     * @return the actor's current hit points.
     */
    public: int getHp();


    /**
     * @brief Accessor method for getting the actor's max hit points.
     * @return the actor's max hit points.
     */
    public: int getMaxHp();


    /**
     * @brief Accessor method for getting the actor's strength.
     * @return the actor's strenght.
     */
    public: int getStrength();


    /**
     * @brief Accessor method for getting the actor's magic.
     * @return the actor's magic.
     */
    public: int getMagic();


    /**
     * @brief Accessor method for getting the actor's skill.
     * @return the actor's skill.
     */
    public: int getSkill();


    /**
     * @brief Accessor method for getting the actor's speed.
     * @return the actor's speed.
     */
    public: int getSpeed();


    /**
     * @brief Accessor method for getting the actor's luck.
     * @return the actor's luck.
     */
    public: int getLuck();


    /**
     * @brief Accessor method for getting the actor's defence.
     * @return the actor's defence.
     */
    public: int getDefence();


    /**
     * @brief Accessor method for getting the actor's resistance.
     * @return the actor's resistance.
     */
    public: int getResistance();


    /**
     * @brief Accessor method for getting the actor's constitution.
     * @return the actor's constitution.
     */
    public: int getConstitution();


    /**
     * @brief Accessor method for getting the actor's weight.
     * @return the actor's weight.
     */
    public: int getWeight();


    /**
     * @brief Accessor method for getting the actor's movement.
     * @return the actor's movement.
     */
    public: int getMovement();


    /**
     * @brief Accessor method for getting the actor's class.
     * @return the actor's class.
     */
    //public: Class getClass();


    /**
     * @brief Accessor method for getting the actor's inventory.
     * @return the actor's inventory.
     */
    //public: Item** getInventory();


    /**
     * @brief Accessor method for getting the index the current equipped item.
     * @return the inde of the current equipped item.
     */
    //public: Item* getEquippedItem();
    public: void setEquippedItemIndex(int equippedItemIndex);
    public: void levelUp();
    public: void calculateDamage();
    public: void takeDamage(int damageTaken);
    public: void heal(int healAmount);
    //public: void addItemToInventory(Item item);
    //public: void removeItemFromInventory(Item item);
    //public: void decrementUses(Item item);
    //public: ActionList getActions(Actor otherActor, Direction direction, GameMap map);
    //public: Action playTurn(ActionList actions, Action lastAction, GameMap map, Display display);
    //public: bool isAlive();
    //public: Weapon getWeapon();

    //ADD SKILL RELATED STUFF LATER
};