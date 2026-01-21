#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _fpValue(0)
{
		std::cout << "Default constructor called" << std::endl;
		return ;
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
		std::cout << "Copy constructor called" << std::endl;
		*this = other;
}

// Assignment operator overload
Fixed &Fixed::operator=(const Fixed &other)
{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_fpValue = other.getRawBits();
		return (*this);
}

// Destructor
Fixed::~Fixed(void)
{
		std::cout << "Destructor called" << std::endl;
		return ;
}

const int	Fixed::_fb = 8;

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_fpValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called\n";
	this->_fpValue = raw;
}
