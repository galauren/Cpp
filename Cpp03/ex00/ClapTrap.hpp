#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string     name_;
        unsigned int    hit_points_;
        unsigned int    energy_points_;
        unsigned int    attack_damage_;

    public:
        ClapTrap();
        ClapTrap(const std::string & name);

        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

