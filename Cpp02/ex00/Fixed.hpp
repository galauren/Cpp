#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
		private:
				int					_fpValue;
				static const int	_fb;
		public:
				Fixed(void);
				Fixed(const Fixed& other);
				Fixed &operator=(const Fixed &other);
				~Fixed();
		public:
				int 	getRawBits( void ) const;
				void	setRawBits( int const raw );
};

#endif

