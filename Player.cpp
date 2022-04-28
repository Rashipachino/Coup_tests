#include "Player.hpp"

void Player::income(){
    if(status == "Dead"){
        throw invalid_argument("Player is dead, cannot complete action");
    }
    if(coin_count == 10){
        throw invalid_argument("Player must coup");
    }
    else{  
        coin_count++;
    }
}
void Player::foreign_aid(){
    if(status == "Dead"){
        throw invalid_argument("Player is dead, cannot complete action");
    }
    if(coin_count == 10){
        throw invalid_argument("Player must coup");
    }
    else{
        coin_count+=2;
    }
}
void Player::coup(Player &p){
    if(status == "Dead"){
        throw invalid_argument("Player is dead, cannot complete action");
    }
    if(coin_count < 7){
        throw invalid_argument("Not enough coins to coup");
    }
    if(p.get_status() == "Dead"){
        throw invalid_argument("Player to coup is already dead");
    }
    else{
        p.change_status(); //kill character
    }
}
int Player::coins() const{
    return coin_count;
}
string Player::role(){
    return "Player";
}
void Player::set_coins(int c){
    coin_count == c;
}
string Player::get_status(){
    return status;
}
void Player::change_status(){
    if(status == "Dead"){
        status = "Alive";
    }
    else if(status == "Alive"){
        status = "Dead";
    }
}
