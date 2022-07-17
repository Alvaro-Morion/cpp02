/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:41:29 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/17 12:07:18 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::_fbit = 8;

/* Constructores y destructor */

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constructor called\n";   
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called\n";
	this->_value = n << _fbit;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called\n";
	_value = roundf((1 << 8) * n);
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
	return;
}

/* operators */
Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called \n";
	this->_value = rhs.getRawBits();
	return(*this);
}

std::ostream    & operator<<(std::ostream & o, Fixed const & fp)
{
    o << fp.toFloat();
    return o;
}

/* Getters y setters */
int	Fixed::getRawBits(void) const
{
	return(this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

/* transformaciones */

int	Fixed::toInt(void) const
{
	return(this->getRawBits() >>  8);
}

float	Fixed::toFloat(void) const
{
	int		fixed;

	fixed = this->getRawBits();
	return((float)fixed / ( 1 << 8 ));
}
