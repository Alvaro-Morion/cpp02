/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:41:13 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/01 18:50:56 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP
# include<iostream>
class	Fixed{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const n);
		Fixed(float const n);
		
		Fixed &	operator=(Fixed const & rhs);

		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;
	private:
		int			_value;
		static int	_fbit; 
};

std::ostream &	operator<<(std::ostream & o, Fixed const & fp);
#endif
