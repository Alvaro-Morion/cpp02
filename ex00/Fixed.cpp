/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:41:29 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/01 16:32:08 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::_fbit = 8;

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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
	return;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called \n";
	this->_value = rhs.getRawBits();
	return(*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return(this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
