#include "Duke.hpp"
#include "Game.hpp"

void Duke::tax(){ //add in turn
if(coins() == 10){
    throw invalid_argument("Player must coup");
}
    set_coins(coins() + 3);
}
void Duke::block(Player &p){//blocks foreign aid 
    if(p.get_status() == "Dead"){
        throw invalid_argument("Player is dead. Cannot block");
    }
    else{

    }
}
