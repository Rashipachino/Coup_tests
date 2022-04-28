#include "Assassin.hpp"
#include "Game.hpp"
  
//assassin can coup with 3 points. That player's status becomes dead
void Assassin::coup(Player &p) {
    if(p.coins() < 3){
        throw invalid_argument("Not enough coins to coup");
    }
    else{
        
    }
    //must add element of turn
    // if(this->coins() < 3){
    //     throw invalid_argument("Not enough coins to coup");
    // }
    // else{
        //status of assassinated turns to dead and assassin remembers that he killed him
    //     p.change_status();
    //     assassinated = p;
    // }
}
// Player Assassin::get_assassinated(){
//     return assassinated;
// }
// void Assassin::set_assassinated(const Player &p){
//     assassinated = p;
//}
