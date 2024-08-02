#include "Pirate.h"

Pirate::Pirate()
{
    this->name = "Pirate";
}

std::unordered_set<std::string> Pirate::wins()
{
    return {"Robot", "Monkey"};
}
