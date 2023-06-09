#include <string>
#include "../engine/Tile.h"
using namespace std;

/**
 * @brief Class for a normal ground tile.
 * @author adamyang21
 */
class Ground : public Tile {
    /**
     * @brief Constructor for Ground.
     * @param height height to set the ground instance to.
     */
    public: Ground(int height);

    /**
     * @brief How the ground tile interacts each action.
     */
    public: void tick();
};