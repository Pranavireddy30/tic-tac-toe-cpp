#pragma once
#include "Board.h"
#include "Scoreboard.h"

class Game
{
    private:
        Board board;
        Scoreboard& scoreboard;
        char currentPlayer;
        void playerTurn();
        void switchPlayer();
    public:
        Game(Scoreboard& scoreboard);
        void playGame();    
};