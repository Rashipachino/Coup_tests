#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
namespace coup{
   class Game 
    {
        protected:
            vector<string> player_list; //have to delete players when game is over
            unordered_map<string, string> player_status; 
            string winning_player;
        public:
            // Game();
            static string turn();
            static vector<string> players();
            static string winner(); //if game is still active, throw error
    };
}
#endif
