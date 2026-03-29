#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
	Weapon hands = Weapon("hands");
	//this->weapon = &hands;
	this->weapon->setType("Hands");
}

HumanB::HumanB(const HumanB &other): name(other.name), weapon(other.weapon)
{
	//*this = other;
}

HumanB &HumanB::operator=(const HumanB &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->weapon = other.weapon;
	return (*this);
}

HumanB::~HumanB(){}

void	HumanB::attack()
{
	if (!this->weapon->getType().empty())
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << " attacks with bare hands." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	delete(this->weapon);
	this->weapon = &weapon;
}
