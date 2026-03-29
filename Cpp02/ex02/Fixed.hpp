#pragma once

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
        
		Fixed&                  operator=(Fixed const &src);
		
        bool			        operator<(Fixed const &src) const;
		bool		    	    operator>(Fixed const &src) const;
		bool			        operator<=(Fixed const &src) const;
		bool			        operator>=(Fixed const &src) const;
		bool			        operator!=(Fixed const &src) const;
		
        bool	    		    operator==(Fixed const &src) const;
		Fixed   			    operator+(Fixed const &src) const;
		Fixed		    	    operator-(Fixed const &src) const;
		Fixed			        operator/(Fixed const &src) const;
		Fixed			        operator*(Fixed const &src) const;
		
        Fixed&	    	    	operator++();
		Fixed		    	    operator++(int);
		Fixed&			        operator--();
		Fixed			        operator--(int);

        int					    getRawBits(void)const;
		void				    setRawBits(int const raw);
        float                   toFloat(void) const;
        int                     toInt(void) const;

        static Fixed &			min(Fixed &a, Fixed &b);
		static Fixed const &	min(Fixed const &a, Fixed const &b);
		static Fixed &			max(Fixed &a, Fixed &b);
		static Fixed const &	max(Fixed const &a, Fixed const &b);
};

std::ostream&	operator<<(std::ostream& o, Fixed const &fixed);
