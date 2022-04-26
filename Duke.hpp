#include <iostream>
#include "Player.hpp"

using namespace coup;
using namespace std;
class Duke : public Player
{
    public:
        Duke(Game g, string name);   
        string role();
        void tax();
        void block(Player p);
};