#include <iostream>
#include "Player.hpp"
using namespace coup;
using namespace std;
class Assassin : public Player
{
    public:
        Assassin(coup::Game g, string name);   
        void coup(Player p); //can coup in 3
        string role();
};