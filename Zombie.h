#pragma once 

#include "Move.h"

class Zombie : public Move {
    public:
        virtual std::unordered_set<std::string> wins() override; 
        Zombie();
};