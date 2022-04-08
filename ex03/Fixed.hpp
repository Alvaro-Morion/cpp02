/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:41:13 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/08 09:07:18 by amorion-         ###   ########.fr       */
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
		
		Fixed const	&operator=(Fixed const & rhs);
		bool	operator>(Fixed const & rhs);
		bool	operator<(Fixed const & rhs);
		bool	operator>=(Fixed const & rhs);
		bool	operator<=(Fixed const & rhs);
		bool	operator==(Fixed const & rhs);
		bool	operator!=(Fixed const & rhs);
		Fixed 	operator+(Fixed const & rhs);
		Fixed	operator-(Fixed const & rhs);
		Fixed	operator*(Fixed const & rhs);
		Fixed	operator/(Fixed const & rhs);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		float	operator++(int);
		float	operator--(int);
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;
		
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed    &min(Fixed &a, Fixed &b);
	private:
		int			_value;
		static int	_fbit; 
};

std::ostream &	operator<<(std::ostream & o, Fixed const & fp);
#endif
