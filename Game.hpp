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
            unsigned long curr_turn = 0;
        public:
            string turn();
            void update_turn();
            vector<string> players();
            void set_players(string name);
            void set_status(string p, string stat);
            string get_status(string p);
            string winner(); //if game is still active, throw error
    };
}
#endif
