/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:37:43 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/10 20:14:49 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed(void): _fixedPointNumValue(0) {

}

Fixed::Fixed(const Fixed &fix) {
	_fixedPointNumValue = fix._fixedPointNumValue;
}

Fixed::Fixed(const int raw) {
	_fixedPointNumValue = raw << _fractionalBits;
}

Fixed::Fixed(const float raw) {
	_fixedPointNumValue = (raw * (1 << _fractionalBits));
}

void	Fixed::operator=(const Fixed &fix) {
	_fixedPointNumValue = fix._fixedPointNumValue;
}

Fixed	&Fixed::operator++(void) {
	_fixedPointNumValue++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);

	_fixedPointNumValue++;
	return (temp);
}

Fixed	&Fixed::operator--(void) {
	_fixedPointNumValue--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);

	_fixedPointNumValue--;
	return (temp);
}

int		Fixed::getRawBits(void) const {
	return (_fixedPointNumValue);
}

void	Fixed::setRawBits(int const raw) {
	_fixedPointNumValue = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)_fixedPointNumValue / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (_fixedPointNumValue >> _fractionalBits);
}

Fixed	operator+(const Fixed &lhs, const Fixed &rhs) {
	return (Fixed(lhs.toFloat() + rhs.toFloat()));
}

Fixed	operator-(const Fixed &lhs, const Fixed &rhs) {
	return (Fixed(lhs.toFloat() - rhs.toFloat()));
}

Fixed	operator*(const Fixed &lhs, const Fixed &rhs) {
	return (Fixed(lhs.toFloat() * rhs.toFloat()));
}

Fixed	operator/(const Fixed &lhs, const Fixed &rhs) {
	return (Fixed(lhs.toFloat() / rhs.toFloat()));
}

bool	operator>(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() > rhs.toFloat());
}

bool	operator<(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() < rhs.toFloat());
}

bool	operator>=(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() >= rhs.toFloat());
}

bool	operator<=(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() <= rhs.toFloat());
}

bool	operator==(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() == rhs.toFloat());
}

bool	operator!=(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() != rhs.toFloat());
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs)
		return (rhs);
	return (lhs);
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs) {
	if (lhs < rhs)
		return (rhs);
	return (lhs);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fix) {
	out << fix.toFloat();
	return (out);
}
