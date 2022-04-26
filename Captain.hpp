#include <iostream>
#include "Player.hpp"
using namespace coup;
using namespace std;
class Captain : public Player
{
    public:
        Captain(Game g, string name);
        void block(Player); //can block like ambassador
        void steal(Player);
        string role();
};