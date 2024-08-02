#include "Monkey.h"

Monkey::Monkey(){
    this->name = "Monkey";
}

std::unordered_set<std::string> Monkey::wins()
{
    return {"Ninja", "Robot"};
}