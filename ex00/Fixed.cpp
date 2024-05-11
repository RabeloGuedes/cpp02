/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:38:03 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/11 19:44:10 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed(void): _fixedPointNumValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const class Fixed &fix) {
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(fix);
}

Fixed	&Fixed::operator=(const class Fixed &fix) {
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointNumValue = fix.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointNumValue);
}

void	Fixed::setRawBits(int const raw) {
	_fixedPointNumValue = raw;
}
