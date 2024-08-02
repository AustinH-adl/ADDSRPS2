#include "MoveFactory.h"
#include <string>

Move* MoveFactory::CreateMove(std::string moveName) {
    if (moveName == "Scissors") {
        return (new Scissors());
    } else if (moveName == "Paper") {
        return (new Paper());
    } else if (moveName == "Rock") {
        return (new Rock());
    } else if (moveName == "Monkey") {
        return (new Monkey());
    } else if (moveName == "Pirate") {
        return (new Pirate());
    } else if (moveName == "Zombie") {
        return (new Zombie());
    } else if (moveName == "Ninja") {
        return (new Ninja());
    } else if (moveName == "Robot") {
        return (new Robot());
    }
    return nullptr;
}