#pragma once
#include "Player.h"

class Computer : public Player {
    public: 
        virtual Move* makeMove() override;
        Computer();
};