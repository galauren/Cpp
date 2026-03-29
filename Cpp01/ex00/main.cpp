#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie("Pierre");
	zombie.announce();

	std::cout << std::endl;

	Zombie*	pointeur_newZombie = newZombie("Jean");
	pointeur_newZombie->announce();
	delete(pointeur_newZombie);

	std::cout << std::endl;

	randomChump("Marc");

	std::cout << std::endl;

	return (0);
}
