#include <string>
#include "../engine/Tile.h"
using namespace std;


class Ground : public Tile {
    public: Ground(int height);
    public: void tick();
};