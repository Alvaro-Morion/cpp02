/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:46:03 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/05 13:27:50 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Constructores y destructor*/

point::point(void)
{}

point::point(Fixed const x, Fixed const y) : _x(x), _y(y)
{}

point::point(point const &src) : _x(src.getX()), _y(src.getY())
{}

Fixed	point::getX(void) const
{
	return(this->_x);
}

Fixed	point::getY(void) const
{
	return(this->_y);
}
point::~point()
{
	return;
}

/*operators*/
point	&point::operator=(point const &rhs)
{
	(void)rhs;
	return(*this);
}
