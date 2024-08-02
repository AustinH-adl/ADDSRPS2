#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>

int notmain() {
    Referee r;
    Computer c;
    Human h;

    Player* winner = r.refGame(&c, &h);

    if (winner != NULL) {
        std::cout << winner->getName();
    } else {
        std::cout << "Tie";
    }
    return 0;
}