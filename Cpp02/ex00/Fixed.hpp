#pragma once

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
