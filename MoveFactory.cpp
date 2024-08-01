#include "MoveFactory.h"
#include <string>

Move* MoveFactory::CreateMove(std::string moveName) {
    if (moveName == "Scissors") {
        return (new Scissors());
    } else if (moveName == "Paper") {
        return (new Paper());
    } else if (moveName == "Rock") {
        return (new Rock());
    }   
    return nullptr;
}