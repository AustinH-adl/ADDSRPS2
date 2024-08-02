#include "Zombie.h"



Zombie::Zombie()
{
    this->name = "Zombie";
}

std::unordered_set<std::string> Zombie::wins()
{
    return {"Pirate", "Monkey"};
}
