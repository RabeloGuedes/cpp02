/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 07:47:49 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/16 19:22:04 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <Fixed.hpp>

class	Point {
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point(void);
		Point(float a, float b);
		Point(const Point &p);
		Point	&operator=(const Point &p);
		~Point(void);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
bool	isTriangle(Point const a, Point const b, Point const c);
#endif
