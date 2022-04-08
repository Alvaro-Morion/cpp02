/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:41:24 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/08 10:35:46 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP
# include"Fixed.hpp"
class	point{
	public:
		point();
		point(point const &src);
		point(Fixed const x, Fixed const y);

		~point();
		Fixed	getX() const;
		Fixed	getY() const;
		point	&operator=(point const &rhs);
		point	operator-(point const &rhs);
	private:
		Fixed const _x;
		Fixed const _y;
};
#endif
