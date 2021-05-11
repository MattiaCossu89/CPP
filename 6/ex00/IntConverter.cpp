/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntConverter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:57 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 16:21:39 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IntConverter.hpp"

static int narrow_cast(double v)
{
	int r = static_cast<int>(v);
	if (ceil(static_cast<double>(r))!= ceil(v) && floor(static_cast<double>(r))!= floor(v))
		throw std::exception();
	return r;
}

IntConverter::IntConverter(const std::string &num) : Converter(num)
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

int	IntConverter::getNum() const
{
	return static_cast<int>(_number);
}

void	IntConverter::displayConversion() const
{
	std::cout << "int: ";
	if (isnan(_number))
		std::cout << "impossible";
	else if (isinf(_number))
		std::cout << "impossible";
	else if (invalid)
		std::cout << "out of bound";
	else
		std::cout << static_cast<int>(_number);
	std::cout << std::endl;
}

IntConverter::~IntConverter()
{
}
