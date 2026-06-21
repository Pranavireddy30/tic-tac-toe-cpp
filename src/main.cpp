#include <iostream>
#include "../include/Game.h"

int main() {
    char choice;
    do {
        Game game;
        game.playGame();
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> choice;
    } while(choice == 'y' || choice == 'Y');
    std::cout << "Thank you for playing!\n";
    return 0;
}