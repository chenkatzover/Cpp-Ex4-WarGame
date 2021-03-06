#pragma once
#include "Paramedic.hpp"
#include <vector>
using namespace WarGame;


class ParamedicCommander : public Paramedic {
public:
    ParamedicCommander (int p): Soldier(p,200,100,30) {}
    void act(std::vector <std::vector<Soldier*>> board,std::pair<int,int> my_loc);
    void act_all(std::vector <std::vector<Soldier*>> board,std::pair<int,int> my_loc);
};
