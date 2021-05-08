/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:45 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:42:46 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLECONVERTER_HPP
#define DOUBLECONVERTER_HPP

#include "Converter.hpp"

#include <math.h>

#include <iostream>
#include <sstream>

class DoubleConverter : public Converter
{
	private:
		DoubleConverter();
	public:
		DoubleConverter(const std::string &num);
		double	getNum() const;
		void	displayConversion() const;
		virtual ~DoubleConverter();
};

#endif
