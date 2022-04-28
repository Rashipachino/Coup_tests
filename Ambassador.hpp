#include <iostream>
#include "Player.hpp"
using namespace coup;
using namespace std;
class Ambassador : public Player
{
    public:
        Ambassador(Game game, string name) : Player(game, name) {
            
        }
        void transfer(const Player &p1, const Player &p2);
        void block(const Player &p1);
};
