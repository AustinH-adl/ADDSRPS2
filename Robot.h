#pragma once 

#include "Move.h"

class Robot : public Move {
    public:
        virtual std::unordered_set<std::string> wins() override; 
        Robot();
};