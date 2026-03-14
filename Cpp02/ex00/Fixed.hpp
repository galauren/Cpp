/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghanibe <aghanibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:51:55 by aghanibe          #+#    #+#             */
/*   Updated: 2026/02/03 15:10:21 by aghanibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {

	private :
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;

	public :
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed& operator=(Fixed const &src);

		int					getRawBits(void)const;
		void				setRawBits(int const raw);
};

#endif