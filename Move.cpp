#include "Move.h"

std::string Move::getName()
{
    return this->name;
}

Move::Move(std::string Name)
{
    name = Name;
}

Move::Move() {}
