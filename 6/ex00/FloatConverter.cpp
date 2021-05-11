/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:49 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 14:15:40 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FloatConverter.hpp"

FloatConverter::FloatConverter(const std::string &num) : Converter(num) {}


float	FloatConverter::getNum() const
{
	return static_cast<float>(_number);
}

void	FloatConverter::displayConversion() const
{
	std::cout << "float: ";
	if (isnan(_number))
		std::cout << "nanf";
	else if (isinf(_number))
		_number < 0 ? std::cout << "-inff" : std::cout << "+inff";
	else if (static_cast<float>(_number) - floor(static_cast<float>(_number)) > 0)
		std::cout << std::setprecision(10) << static_cast<float>(_number) << "f";
	else
		std::cout << static_cast<float>(_number) << ".0f";

	std::cout << std::endl;
}

FloatConverter::~FloatConverter()
{
}
