#include "ClapTrap.hpp"
#include <iostream>

void printSection(const std::string& title) {
    std::cout << "\n=== " << title << " ===" << std::endl;
}

int main() {
    printSection("Default constructor test");
    ClapTrap clap;

    printSection("Named constructor test");
    ClapTrap serena("Serena");

    printSection("Attack test");
    serena.attack("target");

    printSection("Take damage test");
    serena.takeDamage(5);
    serena.takeDamage(10);

    printSection("Repair test");
    serena.beRepaired(8);

    printSection("Edge cases");
    ClapTrap dead("Deadbot");
    dead.takeDamage(100);
    dead.beRepaired(5);
    dead.attack("ghost");

    std::cout << "\n=== Destructors called ===" << std::endl;
    return 0;
}

