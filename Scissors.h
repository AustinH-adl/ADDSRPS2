#pragma once

#include "Move.h"
#include <vector> 

class Scissors : public Move {
    public:
        Scissors();
        virtual std::unordered_set<std::string> wins() override;        
};