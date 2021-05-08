/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharConverter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:27 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:42:28 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharConverter.hpp"

CharConverter::CharConverter(const std::string &num) : Converter(num) {}


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
	else if (isprint(static_cast<char>(_number)))
		std::cout << static_cast<char>(_number);
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

CharConverter::~CharConverter()
{
}
