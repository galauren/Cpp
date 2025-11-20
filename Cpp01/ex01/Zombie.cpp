#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(const std::string name)
{
	this->name = name;
}

Zombie::Zombie(const Zombie &other){}

Zombie::Zombie &operator=(const Zombie &other){}

Zombie::~Zombie()
{
	std::cout << this->name << " is now laying on the ground" << std::endl;
	delete(this);
}

void	announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
