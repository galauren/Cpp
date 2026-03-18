#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : FragTrap(name)
    , ScavTrap(name + "_clap_name")
    , name_(name)
{
    std::cout << "DiamondTrap " << name_ << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name_ << " destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << name_ << std::endl;
    std::cout << "ClapTrap name: " << ScavTrap::name_ << std::endl;
}

