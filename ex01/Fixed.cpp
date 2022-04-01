/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:41:29 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/01 18:50:53 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
int	Fixed::_fbit = 8;

/* Constructores y destructor */

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constructor called\n";   
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(int const n)
{
	this->_value = n << _fbit;
}

Fixed::Fixed(float const n)
{
	int integer = roundf(n);
	float	decimal = 0;
	
	if(integer > n && n > 0)
		integer--;
	if(integer < n && n < 0)
		integer++;
	decimal = (n-integer);
	if (decimal < 0)
		decimal = -decimal;
	_value = (integer << 8) + decimal;	
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
	float	n;
	int		fixed;

	fixed = getRawBits();
	n = fixed >> 8;
	fixed -= (fixed << 8) >> 8;
	return(n);
}

std::ostream	& operator<<(std::ostream & o, Fixed const & fp)
{
	o << fp.toFloat();
	return o;
}
