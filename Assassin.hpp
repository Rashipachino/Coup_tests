#include <iostream>
#include "Player.hpp"
using namespace coup;
using namespace std;
class Assassin : public Player
{
    // protected:
    //     Player assassinated;
    public:
        Assassin(Game game, string name) : Player(game, name) {

        }  
        void coup(Player &p) override; //can coup in 3
        // Player get_assassinated();
        // void set_assassinated(const Player &p);

};
