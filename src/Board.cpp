#include "../include/Board.h"
#include <iostream>

Board::Board() {
    initialize();
}
void Board::initialize() {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            board[row][col] = ' ';
        }
    }
}
void Board::display() {
    std::cout << "\n";
    for(int row = 0; row < 3; row++) {
        std::cout << " ";
        for(int col = 0; col < 3; col++) {
            std::cout << board[row][col];
            if(col < 2) std::cout << " | ";
        }
        std::cout << "\n";
        if(row < 2) std::cout << "---+---+---\n";
    }
    std::cout << "\n";
}
bool Board::makeMove(int row, int col, char symbol) {
    if(board[row][col] != ' ') {
        return false;
    }
    board[row][col] = symbol;
    return true;
}
bool Board::checkWinner(char symbol) {
    // Check rows
    for(int row = 0; row < 3; row++) {
        if(board[row][0] == symbol && board[row][1] == symbol && board[row][2] == symbol) {
            return true;
        }
    }
    // Check columns
    for(int col = 0; col < 3; col++) {
        if(board[0][col] == symbol && board[1][col] == symbol && board[2][col] == symbol) {
            return true;
        }
    }
    // Check diagonals
    if(board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) {
        return true;
    }
    if(board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) {
        return true;
    }
    return false;
}
bool Board::isBoardFull() {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            if(board[row][col] == ' ') {
                return false;
            }
        }
    }
    return true;
}