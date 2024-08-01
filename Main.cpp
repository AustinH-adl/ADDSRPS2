#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Human h;
    Computer c;


    Human* humanptr = &h;
    Referee Ref;

    Player* winner = Ref.refGame(&c, humanptr);
    if (winner != NULL) {
        std::cout << winner->getName() << std::endl;
    } else {
        std::cout << "Tie" << std::endl;
    }
    return 0;
}