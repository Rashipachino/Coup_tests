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
           Game game;
           string status;
        public:
            Player(Game game, string name){
                this->name = name;
                this->coin_count = 0;
                this->game = game;
                this->status = "Alive";
            }
            void income();
            void foreign_aid();
            virtual void coup(Player &p);
            int coins() const; 
            string role(); //add virtual 
            void set_coins(int c);
            string get_status();
            void change_status();
    };

#endif
