#include "Captain.hpp"
#include "Game.hpp"

void Captain::block(const Player &p){
} //can block like ambassador
void Captain::steal(Player &p){
    if(coins() == 10){
        throw invalid_argument("Player must coup");
    }    
    if(p.get_status() == "Dead"){
        throw invalid_argument("Player is dead. Cannot steal from him");
    }
    //add in turn and blocking
    else{
        set_coins(coins() + 2);
        p.set_coins(p.coins() - 2);
    }
}

