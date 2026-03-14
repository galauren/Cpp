/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghanibe <aghanibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:27:10 by aghanibe          #+#    #+#             */
/*   Updated: 2026/03/14 04:06:16 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
