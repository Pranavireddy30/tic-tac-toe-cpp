#include <iostream>
#include "../include/Game.h"

int main() {
    Scoreboard scoreboard;
    char choice;
    do {
        Game game(scoreboard);
        game.playGame();
        std::cout << "Play again? (y/n): ";
        std::cin >> choice;
    } while(choice == 'y' || choice == 'Y');
    std::cout << "Thank you for playing!\n";
    return 0;
}