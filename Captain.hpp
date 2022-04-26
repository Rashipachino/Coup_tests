#include <iostream>
using namespace std;
class Captain : public Player
{
    public:
        Captain(coup::Game g, string name);
        void block(Player); //can block like ambassador
        void steal(Player);
        string role();
};