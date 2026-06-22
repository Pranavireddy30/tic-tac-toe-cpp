#include "../include/Game.h"
#include <iostream>
Game::Game(Scoreboard& scoreboard) : scoreboard(scoreboard) {
    currentPlayer = 'X';
}
void Game::switchPlayer()
{
    if(currentPlayer == 'X')
    {
        currentPlayer = 'O';
    }
    else
    {
        currentPlayer = 'X';
    }
}
void Game::playerTurn() {
    int row, col;
    while(true) {
        std::cout << "Player " << currentPlayer << "\n";
        std::cout <<"Enter row (0-2): ";
        std::cin >> row;
        std::cout <<"Enter column (0-2): ";
        std::cin >> col;
        if(row < 0 || row > 2 || col < 0 || col > 2) {
            std::cout << "Invalid Position!\n";
            continue;
        }
        if(board.makeMove(row, col, currentPlayer)) {
            break;
        }
        std::cout << "Cell already occupied!.\n";
    }
}

void Game::playGame() {
    while(true) {
        board.display();
        playerTurn();
        if(board.checkWinner(currentPlayer)) {
            board.display();
            if(currentPlayer == 'X') {
                scoreboard.addXWin();
            } else {
                scoreboard.addOWin();
            }
            std::cout << "Player "<< currentPlayer << " wins!\n";
            scoreboard.display();
            break;
        }
        if(board.isBoardFull()) {
            board.display();
            scoreboard.addDraw();
            std::cout << "\nDraw!\n";
            scoreboard.display();
            break;
        }
        switchPlayer();
    }
}