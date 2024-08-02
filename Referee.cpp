#include "Referee.h"
#include <unordered_set>
#include <string>

Player *Referee::refGame(Player *player1, Player *player2)
{
    Move* Move1 = player1->makeMove();
    Move* Move2 = player2->makeMove();

    std::unordered_set<std::string> Move1Beats = Move1->wins();
    std::unordered_set<std::string> Move2Beats = Move2->wins();

    if(Move1Beats.count(Move2->getName()) > 0) {
        return player1;
    } else if (Move2Beats.count(Move1->getName()) > 0) {
        return player2;
    } else {
        return nullptr;
    }
}

Referee::Referee() {
    
}