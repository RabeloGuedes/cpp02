/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 08:52:55 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/10 20:14:57 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {
	private:
		int					_fixedPointNumValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fix);
		Fixed(const int raw);
		Fixed(const float raw);
		void				operator=(const Fixed &fix);
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &lhs, Fixed &rhs);
		static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
		static Fixed		&max(Fixed &lhs, Fixed &rhs);
		static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);
};

Fixed			operator+(const Fixed &lhs, const Fixed &rhs);
Fixed			operator-(const Fixed &lhs, const Fixed &rhs);
Fixed			operator*(const Fixed &lhs, const Fixed &rhs);
Fixed			operator/(const Fixed &lhs, const Fixed &rhs);

bool			operator>(const Fixed &lhs, const Fixed &rhs);
bool			operator<(const Fixed &lhs, const Fixed &rhs);
bool			operator>=(const Fixed &lhs, const Fixed &rhs);
bool			operator<=(const Fixed &lhs, const Fixed &rhs);
bool			operator==(const Fixed &lhs, const Fixed &rhs);
bool			operator!=(const Fixed &lhs, const Fixed &rhs);

std::ostream	&operator<<(std::ostream &out, const Fixed &fix);

#endif