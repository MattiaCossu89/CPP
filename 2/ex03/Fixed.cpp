/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:32:56 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:32:56 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::Q = 8;

Fixed::Fixed()
{
	raw = 0;
}
Fixed::Fixed(const int num)
{
	raw = (num << Q);
}

Fixed::Fixed(const float num)
{
	raw = (round((num) * (1 << Q)));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &original)
{
	*this = original;
}

Fixed&	Fixed::operator=(const Fixed &original)
{
	raw = original.raw;
	return *this;
}

bool	Fixed::operator<(const Fixed &fx) const
{
	return (raw < fx.raw);
}

bool	Fixed::operator==(const Fixed &fx) const
{
	return (raw == fx.raw);
}

bool	Fixed::operator!=(const Fixed &fx) const
{
	return !(*this == fx);
}

bool	Fixed::operator<=(const Fixed &fx) const
{
	return (!(*this > fx));
}

bool	Fixed::operator>(const Fixed &fx) const
{
	return (raw > fx.raw);
}

bool	Fixed::operator>=(const Fixed &fx) const
{
	return (!(*this < fx));
}

const Fixed	Fixed::operator+(const Fixed &fx) const
{
	return (Fixed(raw + fx.raw));
}

const Fixed	Fixed::operator-(const Fixed &fx) const
{
	return (Fixed(raw - fx.raw));
}

const Fixed	Fixed::operator*(const Fixed &fx) const
{
	Fixed ret(0);
	long int n = ((long int)(raw) * (long int)fx.raw);
	// n += (1 << Q);
	ret.setRawBits(n >> Q);
	return (ret);
}

const Fixed	Fixed::operator/(const Fixed &fx) const
{
	Fixed ret(0);
	long int temp = (long int)raw << Q;
	// if ((temp >= 0 && fx.raw >= 0) || (temp < 0 && fx.raw < 0))
	// 	temp += fx.raw / 2;
	// else
	// 	temp -= fx.raw / 2;
	ret.setRawBits((temp / fx.raw));
	return ret;
}

Fixed		Fixed::operator++(int)
{
	Fixed ret = *this;
	raw++;
	return (ret);
}

Fixed&		Fixed::operator++()
{
	raw++;
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed ret = *this;
	raw--;
	return (ret);
}

Fixed&		Fixed::operator--()
{
	raw--;
	return (*this);
}


std::ostream& operator<<(std::ostream& os, const Fixed &fx)
{
	os << fx.toFloat();
	return (os);
}

int		Fixed::getRawBits(void) const
{
	return (raw);
}

void	Fixed::setRawBits(int const raw_)
{
	raw = raw_;
}

float	Fixed::toFloat() const
{
	return float(raw) / float(1 << Q);
}

int		Fixed::toInt() const
{
	return  (raw >> Q);
}

const Fixed&	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

const Fixed&	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}
