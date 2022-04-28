#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Game.hpp"
using namespace coup;
using namespace std;

    class Player
    {
        protected:
           int coin_count;
           string name;
        public:
            Player(Game game, string name){
                this->name = name;
                this->coin_count = 0;
            }
            void income();
            void foreign_aid();
            void coup(const Player &p);
            int coins() const; 
            static string role();
    };

#endif
