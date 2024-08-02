#include "Human.h"
#include "Move.h"
#include "MoveFactory.h"
#include "Rock.h"
#include <string>

Human::Human(){
    name = "Human";
}

Human::Human(std::string name) {
    this->name = name;
}

Move* Human::makeMove() {
    std::string input;
    std::cin >> input;
    return (MoveFactory::CreateMove(input));
}