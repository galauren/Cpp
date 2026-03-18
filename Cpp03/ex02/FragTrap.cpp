#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string const & name)
    : ClapTrap(name)
{
    hit_points_ = 100;
    energy_points_ = 100;
    attack_damage_ = 30;
    std::cout << "FragTrap " << name_ << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name_ << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name_ << " says: Hey guys, give me a high five! ✋" << std::endl;
}
