#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(const std::string name)
{
	this->name = name;
}

Zombie::Zombie(const Zombie &other)
{
	*this = other;
}

Zombie &Zombie::operator=(const Zombie &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	return (*this);
}

Zombie::~Zombie()
{
	std::cout << this->name << " is laying breathless on the ground." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
