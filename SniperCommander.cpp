#include "SniperCommander.hpp"
using namespace WarGame;

void SniperCommander::act (std::vector <std::vector<Soldier*>> board,std::pair<int,int> my_loc) {
    Sniper::act(board,my_loc);
    act_all(board,my_loc);
}
void SniperCommander::act_all (std::vector <std::vector<Soldier*>> board,std::pair<int,int> my_loc) {
    for (int i=0; i < board.size(); i++){
        for (int j=0; j < board[0].size(); j++){
            Soldier* temp = board[i][j];
            if (temp == nullptr) continue; 
            if (temp->get_player() == this->get_player()){
                if (temp->get_type()*10 == this->get_type()){
                    temp->act(board,my_loc);
                }
            }
        }
    }
}
