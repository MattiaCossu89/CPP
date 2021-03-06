/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:38 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 16:18:23 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <math.h>

#include <iomanip>
#include <iostream>
#include <exception>
#include <sstream>

class Converter
{
	private:
		Converter();
	protected:
		double _number;
	public:
		Converter(const std::string &num);
		virtual ~Converter();
		virtual void	displayConversion() const = 0;
};

#endif
