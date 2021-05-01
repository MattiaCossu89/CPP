#include "Fixed.hpp"
#include <iostream>

const int Fixed::Q = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	raw = 0;
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

Fixed	&Fixed::operator=(const Fixed &original)
{
	std::cout << "Assignation operator called" << std::endl;
	raw = original.getRawBits();
	return *this;
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
