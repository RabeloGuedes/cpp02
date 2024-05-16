/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 07:48:04 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/16 19:21:58 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point(void): _x(0), _y(0) {

}

Point::Point(float a, float b): _x(a), _y(b) {

}

Point::Point(const Point &p): _x(p._x), _y(p._y) {

}

Point	&Point::operator=(const Point &p) {
	if (this != &p) {
		Fixed	*nonConstX = const_cast<Fixed*>(&_x);
		Fixed	*nonConstY = const_cast<Fixed*>(&_y);
		*nonConstX = p._x;
		*nonConstY = p._y;
	}
	return (*this);
}

Point::~Point(void) {

}

Fixed	Point::getX(void) const {
	return (_x);
}

Fixed	Point::getY(void) const {
	return (_y);
}
