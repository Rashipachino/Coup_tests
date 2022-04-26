#include <iostream>
#include "Player.hpp"
using namespace coup;
using namespace std;
class Assassin : public Player
{
    public:
        Assassin(Game game, string name) : Player(game, name) {

        }  
        void coup(Player p); //can coup in 3
        string role();
};
