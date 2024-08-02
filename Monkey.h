#pragma once 

#include "Move.h"

class Monkey : public Move {
    public:
        virtual std::unordered_set<std::string> wins() override; 
        Monkey();
};