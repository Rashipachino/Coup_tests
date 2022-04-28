#include "Ambassador.hpp"
#include "Game.hpp"

    void Ambassador::transfer(Player &p1, Player &p2){
        //must add element of turn
        if(coins() == 10){
            throw invalid_argument("Player must coup");
        }
        if(p1.get_status() == "Dead" || p2.get_status() == "Dead"){
            throw invalid_argument("Player is dead, therefore, cannot be transfered to/from");
        }
        else{
            p1.set_coins(p1.coins()-1);
            p2.set_coins(p2.coins()+1);
        }
    }; //can transfer points from one player to another
    void Ambassador::block(Player &p1){ //can only block captain
        if(p1.get_status() == "Dead"){
            throw invalid_argument("Player is dead, cannot be blocked");
        }
        //if statement if player is passed its turn
        if(p1.role() != "Captain"){
            throw invalid_argument("Ambassador can only block a Captain");
        }
        else{
            //fill in
        }
    };
