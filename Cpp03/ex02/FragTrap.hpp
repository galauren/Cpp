#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../ex00/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string const & name = "FragTrap");
        ~FragTrap();
        void highFivesGuys(void);
};

#endif
