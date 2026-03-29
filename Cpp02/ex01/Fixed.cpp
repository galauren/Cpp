#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point_value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
    this->_fixed_point_value = n << _fractional_bits;
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
    this->_fixed_point_value = (roundf(f * (1 << _fractional_bits)));
}

Fixed::Fixed(Fixed const &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &src){
	std::cout << "Copy assignement operator called"<< std::endl;
	this->_fixed_point_value = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits function called" << std::endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed_point_value = raw;
}

float	Fixed::toFloat() const {
    return (float)this->_fixed_point_value / (1 << _fractional_bits);
}

int	Fixed::toInt() const {
    return (this->_fixed_point_value >> _fractional_bits);
}

std::ostream&   operator<<(std::ostream& o, Fixed const &fixed) {
    o << fixed.toFloat();
    return (o);
}
