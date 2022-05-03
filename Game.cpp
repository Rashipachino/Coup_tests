#include "Game.hpp"

namespace coup{
    string coup::Game::turn(){
        return player_list[curr_turn];
    }
    void coup::Game::update_turn(){
        while(player_status[player_list[curr_turn]] != "Alive"){
            curr_turn = (curr_turn + 1) % player_list.size();
        }
    }
    vector<string> coup::Game::players(){
        return player_list;
    }
    void coup::Game::set_players(string name){
        player_list.push_back(name);
    }
    void coup::Game::set_status(string p, string stat){
        player_status[p] = stat;
    }
    string coup::Game::get_status(string p){
        return player_status[p];
    }
    string coup::Game::winner()//if game is still active, throw error
    {
        int count = 0;
        string winner;
        for(auto i : player_status){
            if(i.second == "Alive"){
                count++;
                winner = i.first;
            }
        }
        if(count == 1){
            return winner;
        }
        else{
            throw invalid_argument("Game is still in progress");
        }
    }
}
