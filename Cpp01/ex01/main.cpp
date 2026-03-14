#include "Zombie.hpp"

int	main(void)
{
	Zombie		*zombies = NULL;
	int			num = 5;
	std::string	name = "zomb";

	zombies = zombies->zombieHorde(num, name);
	delete[](zombies);
	return (0);
}
