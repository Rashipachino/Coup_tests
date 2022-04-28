#include "Player.hpp"

void Player::income(){}
void Player::foreign_aid(){}
void Player::coup(const Player &p){}
int Player::coins() const{
    return coin_count;
}
string Player::role(){
    return "Player";
}
