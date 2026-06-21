#include <iostream>

char board[3][3];

void initializeBoard() {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            board[row][col] = ' ';
        }
    }
}

void DisplayBoard() {
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
void makeMove(int row, int col, char symbol) {
    board[row][col] = symbol;
}

int main() {
    initializeBoard();
    makeMove(0, 0, 'X');
    makeMove(1, 1, 'O');
    DisplayBoard();
    return 0;
}