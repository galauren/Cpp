#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
//	this->name = name;
//	this->weapon = weapon;
}

HumanA::HumanA(const HumanA &other): name(other.name), weapon(other.weapon)
{
//	*this = other;
}

HumanA &HumanA::operator=(const HumanA &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->weapon = other.weapon;
	return (*this);
}

HumanA::~HumanA(){}

void	HumanA::attack()
{	
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
