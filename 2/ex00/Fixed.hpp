/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:32:24 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:32:24 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	private:
		int raw;
		static const int Q;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &original);
		Fixed	&operator=(const Fixed &original);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
