/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:32:30 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/11 20:40:24 by arabelo-         ###   ########.fr       */
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
		Fixed(const class Fixed &fix);
		~Fixed(void);
		Fixed	&operator=(const class Fixed &fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
