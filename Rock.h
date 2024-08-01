#pragma once

#include "Move.h"
#include <unordered_set>

class Rock : public Move {
    public:
        Rock();
        virtual std::unordered_set<std::string> wins() override;       
};