#include "Rock.h"

Rock::Rock() {
    this->name = "Rock";
}



std::unordered_set<std::string> Rock::wins()
{
    return {"Scissors"};
}
