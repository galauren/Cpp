#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
	Harl	harl;

	if (ac == 2)
	{
		try
		{
			harl.complain(av[1]);
		}
		catch (std::string input)
		{
			(void)input;
			std::cout << "[ Probably complaining about insignificant problems ]\n";
		}
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	return (0);
}
