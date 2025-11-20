#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
	new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Zombie[i].name = name;
	}
	return (Zombie);
}
