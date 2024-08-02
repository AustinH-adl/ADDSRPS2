#include "Ninja.h"

Ninja::Ninja()
{
    this->name = "Ninja";
}

std::unordered_set<std::string> Ninja::wins()
{
    return {"Pirate", "Zombie"}; 
}
