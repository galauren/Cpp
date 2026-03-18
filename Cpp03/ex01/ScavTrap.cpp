#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const & name)
    : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " has been born!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name_ << " shut down!" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    if (hit_points_ > 0 && energy_points_ > 0)
    {
        std::cout << "ScavTrap " << name_ << " mercilessly attacks " << target
                  << " dealing " << attack_damage_ << " dmg pts!" << std::endl;
        --energy_points_;
    }
    else
    {
        std::cout << "ScavTrap " << name_ << " can't attack (dead or no energy)!" << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << name_ << " is now in Gate keeper mode." << std::endl;
}
