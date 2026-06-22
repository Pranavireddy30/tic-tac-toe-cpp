#include <iostream>
#include "../include/Scoreboard.h"

void Scoreboard::addXWin() {
    xWins++;
}
void Scoreboard::addOWin() {
    oWins++;
}
void Scoreboard::addDraw() {
    draws++;
}
void Scoreboard::display() const {
    std::cout << "\n==========\n";
    std::cout << "Scoreboard\n";
    std::cout << "==========\n";
    std::cout << "X Wins : " << xWins << "\n";
    std::cout << "O Wins : " << oWins << "\n";
    std::cout << "Draws : " << draws << "\n";
    std::cout << "\n";
}