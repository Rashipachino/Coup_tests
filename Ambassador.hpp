#include <iostream>
#include "Player.hpp"
using namespace coup;
using namespace std;
class Ambassador : public Player
{
    public:
        Ambassador(coup::Game g, string name);
        void transfer(Player p1, Player p2);
        void block(Player);
        string role();
};