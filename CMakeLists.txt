cmake_minimum_required(VERSION 3.10)

project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(
    TicTacToe
    src/main.cpp
    src/Board.cpp
    src/Game.cpp
    src/Scoreboard.cpp
)