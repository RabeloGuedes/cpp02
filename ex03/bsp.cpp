/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 07:55:06 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/18 11:19:46 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

bool	isTriangle(Point const a, Point const b, Point const c) {
	Fixed	abx = b.getX() - a.getX();
	Fixed	aby = b.getY() - a.getY();

	Fixed	acx = c.getX() - a.getX();
	Fixed	acy = c.getY() - a.getY();

	Fixed	bcx = b.getX() - c.getX();
	Fixed	bcy = b.getY() - c.getY();

	double	ab = sqrt((double)((abx * abx + aby * aby).toFloat()));
	double	ac = sqrt((double)((acx * acx + acy * acy).toFloat()));
	double	bc = sqrt((double)((bcx * bcx + bcy * bcy).toFloat()));
	return (ab + ac > bc && ab + bc > ac && ac + bc > ab);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	if (c.getY() == a.getY())
		return (bsp(b, a, c, point));
	Fixed	s1 = c.getY() - a.getY();
	Fixed	s2 = c.getX() - a.getX();
	Fixed	s3 = b.getY() - a.getY();
	Fixed	s4 = point.getY() - a.getY();

	Fixed	w1 = (a.getX() * s1 + s4 * s2 - point.getX() * s1) / (s3 * s2 - (b.getX() - a.getX()) * s1);
	Fixed	w2 = (s4 - w1 * s3) / s1;

	// std::cout << std::endl << "s1: " << s1 << std::endl;
	// std::cout << "s2: " << s2 << std::endl;
	// std::cout << "s3: " << s3 << std::endl;
	// std::cout << "s4: " << s4 << std::endl;
	// std::cout << "w1: " << w1 << std::endl;
	// std::cout << "w2: " << w2 << std::endl;
	// std::cout << "w1 + w2: " << w1 + w2 << std::endl;
	return (w1 > 0 && w2 > 0 && (w1 + w2) < 1);
}