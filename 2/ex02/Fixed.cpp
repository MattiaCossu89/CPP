#include "Fixed.hpp"
#include <iostream>

const int Fixed::Q = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	raw = 0;
}
Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	raw = (num << Q);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	raw = (round((num) * (1 << Q)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed&	Fixed::operator=(const Fixed &original)
{
	std::cout << "Assignation operator called" << std::endl;
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
	n += (1 << Q);
	ret.setRawBits(n >> Q);
	return (ret);
}

const Fixed	Fixed::operator/(const Fixed &fx) const
{
	Fixed ret(0);
	long int temp = (long int)raw << Q;
	if ((temp >= 0 && fx.raw >= 0) || (temp < 0 && fx.raw < 0))
		temp += fx.raw / 2;
	else
		temp -= fx.raw / 2;
	ret.setRawBits((temp / fx.raw));
	return ret;
}

std::ostream& operator<<(std::ostream& os, const Fixed &fx)
{
	os << fx.toFloat();
	return (os);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
