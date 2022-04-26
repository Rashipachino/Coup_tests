#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Game.hpp"
using namespace std;

    class Player
    {
        protected:
           int coin_count;
           string name;
        public:
            Player(string name){
                this->name = name;
                this->coin_count = 0;
            }
            void income();
            void foreign_aid();
            void coup(Player p);
            int coins(); 
    };

#endif