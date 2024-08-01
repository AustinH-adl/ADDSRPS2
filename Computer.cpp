#include "Computer.h"
#include "Player.h"

Computer::Computer() {
    name = "Computer";
}

Move *Computer::makeMove()
{
    CurrentMove = MoveFactory::CreateMove("Rock");
    return CurrentMove;
}
