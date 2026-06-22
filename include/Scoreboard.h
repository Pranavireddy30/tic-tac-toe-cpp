#pragma once
class Scoreboard
{
    private:
        int xWins = 0;
        int oWins = 0;
        int draws = 0;
    public:
        void addXWin();
        void addOWin();
        void addDraw();
        void display() const;
};