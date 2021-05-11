/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharConverter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:27 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 17:16:55 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharConverter.hpp"

static short narrow_cast(double v)
{
	short r = static_cast<short>(v);
	if (ceil(static_cast<double>(r))!= ceil(v) && floor(static_cast<double>(r))!= floor(v))
		throw std::exception();
	return r;
}

CharConverter::CharConverter(const std::string &num) : Converter(num)
{
	invalid = false;
	try
	{
		narrow_cast(_number);
	}
	catch(const std::exception& e)
	{
		this->invalid = true;
	}
}


char	CharConverter::getChar() const
{
	return static_cast<char>(_number);
}

void	CharConverter::displayConversion() const
{
	std::cout << "char: ";
	if (isnan(_number))
		std::cout << "impossible";
	else if (isinf(_number))
		std::cout << "impossible";
	else if (invalid)
		std::cout << "out of bound";
	else if (isprint(static_cast<char>(_number)))
		std::cout << static_cast<char>(_number);
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

CharConverter::~CharConverter()
{
}
