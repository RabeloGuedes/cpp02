/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 07:57:26 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/16 19:24:07 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed(void): _fixedPointNumValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	_fixedPointNumValue = (n << _fractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) {
	_fixedPointNumValue = roundf(n * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix) {
	_fixedPointNumValue = fix._fixedPointNumValue;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fix) {
	if (this != &fix)
		_fixedPointNumValue = fix._fixedPointNumValue;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;	
}

float	Fixed::toFloat(void) const {
	return ((float)_fixedPointNumValue / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (_fixedPointNumValue >> _fractionalBits);	
}

void	Fixed::setRawBits(int const raw) {
	_fixedPointNumValue = raw;
}

int		Fixed::getRawBits(void) const {
	return (_fixedPointNumValue);
}

std::ostream	&operator<<(std::ostream &out, const class Fixed &fix) {
	out << fix.toFloat(); 
	return (out);
}
