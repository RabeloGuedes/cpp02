/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:47:59 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/10 20:15:49 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;

	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << b / c << std::endl;

	std::cout << (a > c) << std::endl;
	std::cout << (a < c) << std::endl;
	std::cout << (a >= c) << std::endl;
	std::cout << (a <= c) << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << (a != c) << std::endl;

	std::cout << "min(" << a << ", " << c << "): " << Fixed::min(a, c) << std::endl;
	std::cout << "min(" << a << ", " << b << "): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << c << "): " << Fixed::max(a, c) << std::endl;
	std::cout << "max(" << a << ", " << b << "): " << Fixed::max(a, b) << std::endl;
	return 0;
}