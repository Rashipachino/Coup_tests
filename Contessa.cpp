#include "Contessa.hpp"
#include "Game.hpp"
#include "Assassin.hpp"

void Contessa::block(Player &p){//can block assassanation
    if(p.role() != "Assassin"){
        throw invalid_argument("Contessa can only block an Assasin");
    }
    //must add element of turn
    else{

    }
} 