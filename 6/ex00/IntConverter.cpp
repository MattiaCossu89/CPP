/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntConverter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:57 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:42:58 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IntConverter.hpp"

IntConverter::IntConverter(const std::string &num) : Converter(num) {}

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
	else
		std::cout << static_cast<int>(_number);
	std::cout << std::endl;
}

IntConverter::~IntConverter()
{
}
