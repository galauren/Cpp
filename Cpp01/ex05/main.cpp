#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl	harl;
	std::string	line;

	std::getline(std::cin, line);
	while (line != "QUIT" && line != "q")
	{
		try
		{
			harl.complain(line);
		}
		catch (std::string input)
		{
			std::cout << input << "  : input not found.\n\n";
			std::cout << "USE: q/QUIT to quit.\nDEBUG/INFO/WARNING/ERROR to receive a private message from harl." << std::endl;
		}
		std::getline(std::cin, line);
	}
	return (0);
}
