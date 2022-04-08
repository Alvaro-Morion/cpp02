/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:56:07 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/08 10:35:41 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(point a, point b, point c, point p);
int main()
{
	point p1;
	point p2(Fixed(0.5f), Fixed(0.5f));
	point p3(Fixed(1), Fixed(1));
	point p4(Fixed(1.5f), Fixed(0));
	point p5(Fixed(-1), Fixed(-1));
	point p6(Fixed(0.3f), Fixed(0.3f));
	point p7(Fixed(0.5f), Fixed(0.3f));

	std::cout << "alineados y dentro: "<< bsp(p1,p2,p3,p6) << std::endl;
	std::cout << "alineados y fuera: " << bsp(p1,p2,p3,p5) << std::endl;
	std::cout << "Triángulo dentro: " << bsp (p1,p3,p4,p7) << std::endl;
	std::cout << "Triángulo fuera: " << bsp(p1,p3,p4,p5) << std::endl;
	return(0);
}
