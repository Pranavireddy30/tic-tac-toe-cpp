#include <iostream>

int main() {
    int position;

    std::cout << "\n";
    std::cout << "-------------\n";
    std::cout << "| 1 | 2 | 3 |\n";
    std::cout << "-------------\n";
    std::cout << "| 4 | 5 | 6 |\n";
    std::cout << "-------------\n";
    std::cout << "| 7 | 8 | 9 |\n";
    std::cout << "-------------\n";
    std::cout << "Choose the position (1-9): ";
    std::cin>> position;
    std::cout << "You have chosen position: " << position << std::endl;
    return 0;
}