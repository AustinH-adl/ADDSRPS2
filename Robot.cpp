#include "Robot.h"

Robot::Robot()
{
    this->name = "Robot";
}

std::unordered_set<std::string> Robot::wins()
{
    return {"Ninja", "Zombie"};
}
