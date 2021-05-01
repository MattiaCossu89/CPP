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
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat() const;
		int			toInt() const;

};

std::ostream& operator<<(std::ostream& os, const Fixed &fx);
