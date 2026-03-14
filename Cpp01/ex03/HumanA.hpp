#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private :
		std::string	name;
		Weapon		&weapon;

	public :
		HumanA(std::string name, Weapon &weapon);
		HumanA(const HumanA &other);
		HumanA &operator=(const HumanA &other);
		~HumanA();
		void	attack();
};
