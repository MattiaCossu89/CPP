/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:32:45 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:32:45 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <iostream>

class Fixed
{
	private:
		int raw;
		static const int Q;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &original);
		Fixed(const int num);
		Fixed(const float num);
		static const Fixed&	min(const Fixed &f1, const Fixed &f2);
		static const Fixed&	max(const Fixed &f1, const Fixed &f2);
		static Fixed&	min(Fixed &f1, Fixed &f2);
		static Fixed&	max(Fixed &f1, Fixed &f2);
		Fixed&		operator=(const Fixed &original);
		bool		operator<(const Fixed &fx) const;
		bool		operator==(const Fixed &fx) const;
		bool		operator!=(const Fixed &fx) const;
		bool		operator<=(const Fixed &fx) const;
		bool		operator>(const Fixed &fx) const;
		bool		operator>=(const Fixed &fx) const;
		const Fixed	operator+(const Fixed &fx) const;
		const Fixed	operator-(const Fixed &fx) const;
		const Fixed	operator*(const Fixed &fx) const;
		const Fixed	operator/(const Fixed &fx) const;
		Fixed		operator++(int);
		Fixed&		operator++();
		Fixed		operator--(int);
		Fixed&		operator--();
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat() const;
		int			toInt() const;

};

std::ostream& operator<<(std::ostream& os, const Fixed &fx);
