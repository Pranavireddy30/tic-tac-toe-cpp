# Tic Tac Toe (C++)

A console-based Tic Tac Toe game built in C++ as a learning project to practice object-oriented programming, project structure, and build systems.

## Features

- Two-player gameplay (Player X vs Player O)
- Win detection
- Draw detection
- Input validation
- Replay option
- Object-oriented design
- CMake build support

## Project Structure

```text
TicTacToe/
│
├── include/
│   ├── Board.h
│   └── Game.h
│
├── src/
│   ├── Board.cpp
│   ├── Game.cpp
│   └── main.cpp
│
├── CMakeLists.txt
└── README.md
```

## Concepts Practiced

- Classes and Objects
- Encapsulation
- Arrays
- Loops
- Functions
- Header Files (.h)
- Source Files (.cpp)
- CMake
- Git and GitHub

## Build Instructions

### Requirements

- C++ compatible compiler
- CMake

### Build

```bash
mkdir build
cd build

cmake ..
cmake --build .
```

### Run

```bash
./TicTacToe
```

On Windows:

```cmd
TicTacToe.exe
```

## Future Improvements

- Scoreboard
- Better input validation
- Improved board UI
- Single-player mode
- Computer AI opponent
- Unit tests

## Author

Built as a C++ learning project.