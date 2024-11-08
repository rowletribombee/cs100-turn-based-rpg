#pragma once
#include <vector>
#include "tiles/Tile.h"
using namespace std;

class Game{
    public:
        Game();
        void startGame(); // this is where we will be prompted to load or start a new game
    private:
        vector<vector<Tile>> map; 
};