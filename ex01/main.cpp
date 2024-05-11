#include <Fixed.hpp>
#include <stdio.h>

void	printBits(int n) {
	int	space = 0;
	std::cout << "Printing: " << n << std::endl;
	for (int i = 31; i >= 0; i--) {
		if (space == 4) {
			std::cout << " ";
			space = 0;
		}
		if ((n >> i) & 1)
			std::cout << "1";
		else
			std::cout << "0";
		space++;
	}
	std::cout << std::endl;
}

void	printBits(const Fixed &n) {
	int	space = 0;
	std::cout << "Printing: " << n << std::endl;
	for (int i = 31; i >= 0; i--) {
		if (space == 4) {
			std::cout << " ";
			space = 0;
		}
		if ((n.toInt() >> i) & 1)
			std::cout << "1";
		else
			std::cout << "0";
		space++;
	}
	std::cout << std::endl;
}

void	printBitsF(const Fixed &n) {
	float f = n.toFloat();
	void *ptr = &f;
	int	space = 0;
	std::cout << "Printing: " << n << std::endl;
	for (int i = 31; i >= 0; i--) {
		if (space == 4) {
			std::cout << " ";
			space = 0;
		}
		if ((*(int *)(ptr) >> i) & 1)
			std::cout << "1";
		else
			std::cout << "0";
		space++;
	}
	std::cout << std::endl;
}

void	printRawBits(const Fixed &n) {
	std::cout << "Printing: " << n.getRawBits() << std::endl;
	int	space = 0;
	for (int i = 31; i >= 0; i--) {
		if (space == 4) {
			std::cout << " ";
			space = 0;
		}
		if ((n.getRawBits() >> i) & 1)
			std::cout << "1";
		else
			std::cout << "0";
		space++;
	}
	std::cout << std::endl;
}

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed const e( 8.73747f );

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

	return 0;
}
