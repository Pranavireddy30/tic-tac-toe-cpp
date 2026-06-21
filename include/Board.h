#pragma once
class Board
{
    private:
        char board[3][3];
        void initialize();
    public:
        Board();
        void display();
        bool makeMove(int row, int col, char symbol);
        bool checkWinner(char symbol);
        bool isBoardFull();
};