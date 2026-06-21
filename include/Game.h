#pragma once
#include "Board.h"
class Game
{
    private:
        Board board;
        char currentPlayer;
        void playerTurn();
        void switchPlayer();
    public:
        Game();
        void playGame();    
};