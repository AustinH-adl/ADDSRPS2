#pragma once 
#include "Move.h"
#include "MoveFactory.h"

class Player {
    protected:
        Move* CurrentMove;
        std::string name;
    public:
        virtual Move* makeMove() =0;
        std::string getName();
};