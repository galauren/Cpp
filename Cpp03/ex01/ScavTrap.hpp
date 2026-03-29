#pragma once

#include "../ex00/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string const & name = "ScavTrap");
        ~ScavTrap();

        void attack(std::string const & target);
        void guardGate(void);
};
