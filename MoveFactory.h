#pragma once
#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include <string>

class MoveFactory {
    public:
        static Move* CreateMove(std::string moveName);
};