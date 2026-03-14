#pragma once

#include <iostream>

class Zombie
{
	private:
			std::string	name;

	public:
			Zombie();
			Zombie(const std::string name);
			Zombie(const Zombie &other);
			Zombie &operator=(const Zombie &other);
			~Zombie();
	public:
			void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
