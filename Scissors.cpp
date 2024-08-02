#include "Scissors.h"

Scissors::Scissors()
{
    this->name = "Scissors";
}

std::unordered_set<std::string> Scissors::wins()
{
    return {"Paper"};   
}