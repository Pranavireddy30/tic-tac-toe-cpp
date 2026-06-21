#include <iostream>

char board[3][3];

void initializeBoard() {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            board[row][col] = ' ';
        }
    }
}

void displayBoard() {
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
bool checkWinner(char symbol) {
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
int main() {
    initializeBoard();
    char currentPlayer = 'X';
    while(true) {
        displayBoard();
        playerTurn(currentPlayer);
        if(checkWinner(currentPlayer)) {
            displayBoard();
            std::cout << "Player "<< currentPlayer << " wins!\n";
            break;
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}