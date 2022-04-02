/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:41:13 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/02 13:53:59 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP
# include<iostream>
# include<cmath>
class	Fixed{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const n);
		Fixed(float const n);
		
		Fixed &	operator=(Fixed const & rhs);
		bool	operator>(Fixed const & rhs);
		bool	operator<(Fixed const & rhs);
		bool	operator>=(Fixed const & rhs);
		bool	operator<=(Fixed const & rhs);
		bool	operator==(Fixed const & rhs);
		bool	operator!=(Fixed const & rhs);
		Fixed &	operator+(Fixed const & rhs);

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
