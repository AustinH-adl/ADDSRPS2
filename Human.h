#pragma once 
#include "Player.h"
#include "Move.h"
#include <string>

class Human : public Player {
    public:
        Human();
        Human(std::string name);
        virtual Move* makeMove() override;
};