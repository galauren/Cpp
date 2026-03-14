/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghanibe <aghanibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 23:23:26 by aghanibe          #+#    #+#             */
/*   Updated: 2026/03/14 01:03:24 by aghanibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {

	private :
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;

	public :
		Fixed();
        Fixed(const int n);
        Fixed(const float n);
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed& operator=(Fixed const &src);
		
        int					getRawBits(void)const;
		void				setRawBits(int const raw);
        float               toFloat(void) const;
        int                 toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &fixed);

#endif