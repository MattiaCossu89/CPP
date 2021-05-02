/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:32:34 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:32:35 by mcossu           ###   ########.fr       */
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
		Fixed	&operator=(const Fixed &original);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &fx);
