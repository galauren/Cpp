#pragma once

#include <string>
#include <iostream>
#include "../ex00/ClapTrap.hpp"
#include "../ex01/ScavTrap.hpp"
#include "../ex02/FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name_;

    public:
        DiamondTrap(std::string name = "DiamondTrap");
        ~DiamondTrap();
        void whoAmI(void);
};
