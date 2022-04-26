#include <iostream>
using namespace std;
class Duke : public Player
{
    public:
        Duke(coup::Game g, string name);   
        string role();
        void tax();
        void block(Player p);
};