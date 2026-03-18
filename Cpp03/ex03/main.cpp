#include "DiamondTrap.hpp"
#include <iostream>

void printSection(const std::string& title) {
    std::cout << "\n=== " << title << " ===" << std::endl;
}

int main() {
    printSection("Default DiamondTrap constructor test");
    DiamondTrap diamond_default;

    printSection("Named DiamondTrap constructor test");
    DiamondTrap diamond("Ruby");

    printSection("whoAmI test");
    diamond.whoAmI();

    printSection("ScavTrap attack test (should use _clap_name)");
    diamond.ScavTrap::attack("enemy");

    printSection("FragTrap high fives (should use base name)");
    diamond.FragTrap::highFivesGuys();

    printSection("ScavTrap guardGate test");
    diamond.ScavTrap::guardGate();

    printSection("Damage and repair tests");
    diamond.FragTrap::takeDamage(30);
    diamond.FragTrap::beRepaired(20);
    diamond.FragTrap::takeDamage(100);

    printSection("Edge case - dead robot");
    diamond.ScavTrap::attack("ghost");

    std::cout << "\n=== All tests completed, destructors follow ===" << std::endl;
    return 0;
}

