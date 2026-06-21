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
bool makeMove(int row, int col, char symbol) {
    if(board[row][col] != ' ') {
        return false;
    }
    board[row][col] = symbol;
    return true;
}
void playerTurn(char symbol) {
    int row, col;
    std::cout << "Player " << symbol << "\n";
    std::cout <<"Enter row (0-2): ";
    std::cin >> row;
    std::cout <<"Enter column (0-2): ";
    std::cin >> col;
    if(!makeMove(row, col, symbol)) {
        std::cout << "Cell already occupied!.\n";
        playerTurn(symbol);
    }
}

int main() {
    initializeBoard();
    char currentPlayer = 'X';
    while(true) {
        DisplayBoard();
        playerTurn(currentPlayer);
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}