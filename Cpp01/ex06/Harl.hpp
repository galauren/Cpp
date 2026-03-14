/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kon <kon@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:20:52 by kon               #+#    #+#             */
/*   Updated: 2026/01/21 19:48:55 by kon              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
#define HARL_CLASS_H

#include <iostream>

class	Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif