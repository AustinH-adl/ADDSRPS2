#include "Paper.h"

Paper::Paper()
{
    this->name = "Paper";
}

std::unordered_set<std::string> Paper::wins()
{
    return {"Scissors"};
}