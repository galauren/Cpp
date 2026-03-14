/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghanibe <aghanibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 03:59:04 by aghanibe          #+#    #+#             */
/*   Updated: 2026/03/14 04:22:45 by aghanibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// forme canonique

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

// copy operator

Fixed&	Fixed::operator=(Fixed const &src){
	std::cout << "Copy assignement operator called"<< std::endl;
	this->_fixed_point_value = src.getRawBits();
	return (*this);
}

// comparaison operators

bool	Fixed::operator<(Fixed const &src) const {
	if (this->getRawBits() < src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(Fixed const &src) const {
	if (this->getRawBits() > src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const &src) const {
	if (this->getRawBits() <= src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const &src) const {
	if (this->getRawBits() >= src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const &src) const {
	if (this->getRawBits() == src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const &src) const {
	if (this->getRawBits() != src.getRawBits())
		return true;
	return false;
}

// arithmetic operators

Fixed	Fixed::operator+(Fixed const &src) const {
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const &src) const {
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const &src) const {
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const &src) const {
	return Fixed(this->toFloat() / src.toFloat());
}

// increment / decrement operators

Fixed&	Fixed::operator++() {
	this->_fixed_point_value++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);

	operator++();
	return tmp;
}

Fixed&	Fixed::operator--() {
	this->_fixed_point_value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);

	operator--();
	return tmp;
}

// member functions

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

Fixed &	Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return a;
	return b;
}

// functions

std::ostream&   operator<<(std::ostream& o, Fixed const &fixed) {
    o << fixed.toFloat();
    return (o);
}