#pragma once 

#include "Move.h"

class Pirate : public Move {
    public:
        virtual std::unordered_set<std::string> wins() override; 
        Pirate();
};