/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:03:19 by galauren          #+#    #+#             */
/*   Updated: 2025/10/20 17:20:22 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <cctype>
#import <iostream>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j;

	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
		{
			std::cout << (char)std::toupper(av[i][j]);
		}
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
