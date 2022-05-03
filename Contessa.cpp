#include "Contessa.hpp"
#include "Game.hpp"
#include "Assassin.hpp"

void Contessa::block(Player &p){//can block assassanation turn "Assassinated" to "Alive"
    if(p.role() != "Assassin"){
        throw invalid_argument("Contessa can only block an Assasin");
    }
    if(this->game.turn() != this->name){
        throw invalid_argument("Player is out of turn");
    }
    if(p.get_last_move() != "Coup" || this->game.get_status(this->history.get_name()) != "Assassinated"){
        throw invalid_argument("Too late Contessa");
    }
    else{
        this->game.set_status(this->history.get_name(), "Alive");
    }
} 