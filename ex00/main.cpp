/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:41:26 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/23 14:13:45 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>


int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

// int	main(void) {
// 	Fixed	fix;
// 	Fixed	b;

// 	fix.setRawBits(5);
// 	b = fix;
// 	std::cout << "Fixed fix address: " << &fix << std::endl;
// 	std::cout << "Fixed b address: " << &b << std::endl;
// 	std::cout << "Fixed fix rawBits: " << fix.getRawBits() << std::endl;
// 	std::cout << "Fixed b rawBits: " << b.getRawBits() << std::endl;
// 	std::cout << "Fixed b address: " << b.getBitsAddress() << std::endl;
// }
