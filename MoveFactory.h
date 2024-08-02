#pragma once
#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Scissors.h"
#include <string>

class MoveFactory {
    public:
        static Move* CreateMove(std::string moveName);
};