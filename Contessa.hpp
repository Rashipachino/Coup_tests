#include <iostream>
#include "Player.hpp"
using namespace coup;
using namespace std;
class Contessa : public Player
{
    public:
        Contessa(coup::Game g, string name);
        void block(Player); //can block assassanation
        string role();
};