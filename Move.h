#pragma once
#include <string>
#include <unordered_set>

class Move {
    protected:
        std::string name;
    public:
        virtual std::unordered_set<std::string> wins() = 0; 
        std::string getName();
        Move(std::string Name);
        Move();
};

