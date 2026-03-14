#pragma once

#include <iostream>

class Weapon
{
	private:
			std::string	type;

	public:
			Weapon();
			Weapon(std::string type);
			Weapon(const Weapon &other);
			Weapon &operator=(const Weapon &other);
			~Weapon();

	public:
			const	std::string getType();
			void	setType(std::string newValue);
};
