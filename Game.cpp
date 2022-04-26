#include "Game.hpp"

string coup::Game::turn(){
    return "bla";
}
vector<string> coup::Game::players(){
    vector<string> ex;
     for (unsigned long i = 0; i < 10; i++)
     {
         ex[i] = "hi";
     }
    return ex;
}
string coup::Game::winner()//if game is still active, throw error
{
    return "winner";
}