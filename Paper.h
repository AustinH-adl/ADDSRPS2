#pragma once

#include "Move.h"
#include <unordered_set>

class Paper : public Move {
    public:
        Paper();
        virtual std::unordered_set<std::string> wins() override;
        
};