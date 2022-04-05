/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:57:15 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/05 11:26:11 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	std::cout << "MAIN OF SUBJECT\n";
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "MAIN OF SUBJECT\n";
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
   	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl << "MAIN TO TEST THE REST OF THE THINGS\n";
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
	a = Fixed(12.5f);
	c = Fixed(17);
	std::cout << "\t OPERADORES ARITMÉTICOS\t\n";
	std::cout << a << "+" << c << "=" << a + c << std::endl;
	std::cout << a << "-" << c << "=" << a - c << std::endl;;
	std::cout << a << "/" << c << "=" << a / c << std::endl;
	std::cout << "\t OPERADOR -- \t\n";
	a = Fixed(0);
	std::cout << "--a:\t" << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << "a--:\t" << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << "\t MIN & MAX\t\n";
	std::cout << "a=" << a << " c=" << c << " max: " << Fixed::max(a,c) << std::endl;
   	std::cout << "a=" << a << " b=" << b << " min: " << Fixed::min(a, b) << std::endl;
	std::cout << "a=" << a << " c=" << c << " min: " << Fixed::min(a,c) << std::endl; 	
	return 0;
}
