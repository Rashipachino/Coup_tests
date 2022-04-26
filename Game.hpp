#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include <vector>
using namespace std;
namespace coup{
   class Game 
    {
        protected:
            vector<string> player_list; //have to delete players when game is over
            vector<int> players_status; 
            string winning_player;
        public:
            Game();
            string turn();
            vector<string> players();
            string winner(); //if game is still active, throw error
    };
}
#endif