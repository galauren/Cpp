/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kon <kon@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:50:15 by kon               #+#    #+#             */
/*   Updated: 2026/01/21 21:02:19 by kon              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error" << std::endl;
		std::cout << "Usage: ./harlFilter level" << std::endl;
		return (0);
	}

	Harl	harl;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR",};

	int	levelIndex = -1;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == av[1])
		{
			levelIndex = i;
			break ;
		}
	}

	switch (levelIndex)
	{
		case 0:
			harl.complain("DEBUG");
			std::cout << "\n";
			harl.complain("INFO");
			std::cout << "\n";
			harl.complain("WARNING");
			std::cout << "\n";
			harl.complain("ERROR");
			break ;
		case 1:
			harl.complain("INFO");
			std::cout << "\n";
			harl.complain("WARNING");
			std::cout << "\n";
			harl.complain("ERROR");
			break ;
		case 2:
			harl.complain("WARNING");
			std::cout << "\n";
			harl.complain("ERROR");
			break ;
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
