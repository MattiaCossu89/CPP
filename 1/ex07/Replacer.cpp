/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:30:44 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/04 18:36:05 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <iostream>
#include <unistd.h>
#include <time.h>
void	Replacer::replace()
{
	size_t it;
	it = _str.find(_s1);
	while (it != std::string::npos)
	{
		_str.replace(it, _s1.length(), _s2);
		it = _str.find(_s1, it + _s2.length());
	}
}
Replacer::Replacer(const std::string &str, const std::string &s1, const std::string &s2) : _old_str(str), _str(str), _s1(s1), _s2(s2)
{
	this->replace();
}
std::string Replacer::getOldString()
{
	return (_old_str);
}
std::string Replacer::getReplacedString()
{
	return (_str);
}
