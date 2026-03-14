#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
		std::string	name;
		Weapon		*weapon;

	public :
		HumanB(std::string name);
		HumanB(const HumanB &other);
		HumanB &operator=(const HumanB &other);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};
