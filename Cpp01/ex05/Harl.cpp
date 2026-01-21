#include "Harl.hpp"

// Default constructor
Harl::Harl(void)
{
		std::cout << "Default constructor called" << std::endl;
		return ;
}

// Copy constructor
Harl::Harl(const Harl &other)
{
		std::cout << "Copy constructor called" << std::endl;
		(void) other;
		return ;
}

// Assignment operator overload
Harl &Harl::operator=(const Harl &other)
{
		std::cout << "Assignment operator called" << std::endl;
		(void) other;
		return (*this);
}

// Destructor
Harl::~Harl(void)
{
		std::cout << "Destructor called" << std::endl;
		return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	void	(Harl::*functions[])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string	outcomes[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == outcomes[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
	throw (level);
}
