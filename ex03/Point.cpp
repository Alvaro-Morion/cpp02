/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:46:03 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/08 09:50:25 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Constructores y destructor*/

point::point(void ) : _x(0), _y(0) 
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

point	point::operator-(point const &rhs)
{
	point result(this->getX()-rhs.getX(), this->getY()-rhs.getY());
	return(result);
}
