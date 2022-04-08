/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:04:23 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/08 10:31:41 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	determinant(point v1, point v2)
{
	return(v1.getX() * v2.getY() - v1.getY()*v2.getX());
}

Fixed	dot(point v1, point v2)
{
	return(v1.getX() * v2.getX() + v1.getY() * v2.getY());
}
bool	bsp (point a, point b, point c, point p)
{
	point v1(b-a);
	point v2(c-a);
	point v0(p-a);
	Fixed lambda;
	Fixed mu;

	if(determinant(v1, v2) == 0)
	{
	std::cout << "Warning: Points given are aligned.\n";
	std::cout << "Function return indicates if p lies on the segment joining a,b,c\n";
	lambda = v0.getX()/v1.getX();
	if(lambda != v0.getY()/v1.getY())
	{
		std::cout << "Not aligned with the segment\n";
		return(0);
	}
	if(dot(v0, p-b) * dot(v0, p-c) > 0 && dot(v0, p -b) * dot(p-b, p-c) > 0)
		return(0);
	return(1);
	}
	lambda = determinant(v0, v2) / determinant(v1, v2);
	mu = determinant(v1, v0) / determinant(v1,v2);
	if(lambda <= 1 && mu <= 1 && lambda + mu <= 1 && lambda >= 0 && mu >= 0)
		return(1);
	return(0);
}
