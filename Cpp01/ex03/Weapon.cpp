#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(const Weapon &other)
{
	*this = other;
}

Weapon &Weapon::operator=(const Weapon &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

Weapon::~Weapon(){}

const	std::string	Weapon::getType()
{
	return (this->type);
}

void		Weapon::setType(std::string type)
{
	this->type = type;
}
