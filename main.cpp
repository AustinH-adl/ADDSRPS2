#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>

int main() {
    Referee r;
    std::string name1;
    std::string name2;
    std::cin >> name1;
    std::cin >> name2;

    Human one(name1);
    Human two(name2);

    Player* winner = r.refGame(&one, &two);

    if (winner != NULL) {
        std::cout << winner->getName();
    } else {
        std::cout << "Tie";
    }
    return 0;
}