#include "Harl.hpp"

int	main()
{
	Harl	harl;

	std::cout << "Harl can makes differents kind of comments." << std::endl;
	std::cout << "They are classified by levels:" << std::endl;
	std::cout << "DEBUG level: Debug messages contain contextual information. They are mostly used for problem diagnosis." << std::endl;
	std::cout << "INFO level: These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl;
	std::cout << "WARNING level: Warning messages indicate a potential issue in the system. However, it can be handled or ignored." << std::endl;
	std::cout << "ERROR level: These messages indicate that an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention." << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Please type a level of comments..." << std::endl;
		std::string	input;
		getline(std::cin, input);
		harl.complain(input);
	}
	return (0);
}
