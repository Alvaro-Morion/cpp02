/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:57:15 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/02 13:54:03 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(-0.1f);
	std::cout << "\t OPERADORES DE COMPARACIÓN \t\n";
	std::cout << a << ">" << c << ":\t" << (a > c) << std::endl;
	std::cout << a << "<" << c << ":\t" << (a < c) << std::endl;
	std::cout << a << ">=" << c << ":\t" << (a >= c) << std::endl;
    std::cout << a << "<=" << c << ":\t" << (a <= c) << std::endl;
	std::cout << a << "==" << c << ":\t" << (a == c) << std::endl;
	std::cout << a << "!=" << c << ":\t" << (a != c) << std::endl;
	c = Fixed(0.5f);
	std::cout << a << ">" << c << ":\t" << (a > c) << std::endl;
	std::cout << a << "<" << c << ":\t" << (a < c) << std::endl;
	std::cout << a << ">=" << c << ":\t" << (a >= c) << std::endl;
    std::cout << a << "<=" << c << ":\t" << (a <= c) << std::endl;
	std::cout << a << "==" << c << ":\t" << (a == c) << std::endl;
    std::cout << a << "!=" << c << ":\t" << (a != c) << std::endl;
	c = a;
	std::cout << a << ">" << c << ":\t" << (a > c) << std::endl;
	std::cout << a << "<" << c << ":\t" << (a < c) << std::endl;
	std::cout << a << ">=" << c << ":\t" << (a >= c) << std::endl;
    std::cout << a << "<=" << c << ":\t" << (a <= c) << std::endl;
	std::cout << a << "==" << c << ":\t" << (a == c) << std::endl;
    std::cout << a << "!=" << c << ":\t" << (a != c) << std::endl;
	b = Fixed(17);
	std::cout << "\t OPERADORES ARITMÉTICOS\t\n"
	std::cout << a << "+" << b << "=" << a + b << endl;
	//std::cout << a << std::endl;
	//std::cout << ++a << std::endl;
	//std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
