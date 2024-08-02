#pragma once 

#include "Move.h"

class Ninja : public Move {
    public:
        virtual std::unordered_set<std::string> wins() override; 
        Ninja();
};