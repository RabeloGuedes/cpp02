/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:47:59 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/16 18:59:08 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

int main(void) {
	// Point	t(4.2, 7.8);
	// Point	r(t);
	// Point	s = r;

	// std::cout << "Point p: (" << p.getX() << ", " << p.getY() << ")" << std::endl;
	// std::cout << "Point t: (" << t.getX() << ", " << t.getY() << ")" << std::endl;
	// std::cout << "Point r: (" << r.getX() << ", " << r.getY() << ")" << std::endl;
	// std::cout << "Point s: (" << s.getX() << ", " << s.getY() << ")" << std::endl;

	const Point	a(-4.0, 2.0);
	const Point	b(-2.0, 6.0);
	const Point	c(-6.0, 4.0);
	const Point	p(-4.0, 4.0);

	std::cout << "can point a(" << a.getX() << ", " << a.getY() << ") | ";
	std::cout << "can point b(" << b.getX() << ", " << b.getY() << ") | ";
	std::cout << "can point c(" << c.getX() << ", " << c.getY() << ") form a triangle? " << isTriangle(a, b, c) << std::endl;
	std::cout << "is point p(" << p.getX() << ", " << p.getY() << ") " << "inside the triangle? " << bsp(a, b, c, p) << std::endl;
	return 0;
}