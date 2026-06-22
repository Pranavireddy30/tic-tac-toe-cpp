# Tic Tac Toe (C++)

Current Version: v1.0.0

A console-based Tic Tac Toe game built in C++ as a learning project to practice object-oriented programming, project structure, and build systems.

## Features

- Two-player gameplay (Player X vs Player O)
- Win detection
- Draw detection
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

## Roadmap

### v1.0.0
- [x] Two-player gameplay
- [x] Win detection
- [x] Draw detection
- [x] Replay functionality
- [x] Object-oriented design
- [x] CMake support

### v1.1.0
- [ ] Scoreboard
- [ ] Better board UI
- [ ] Input validation

### v1.2.0
- [ ] Computer opponent

### v2.0.0
- [ ] Minimax AI
- [ ] Unbeatable computer player

## Author

Built as a learning project while exploring modern C++ development practices.