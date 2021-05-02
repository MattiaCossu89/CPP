/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:30:44 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:30:45 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

void	Replacer::replace()
{
	size_t it;
	while ((it = _str.find(_s1)) != std::string::npos)
		_str.replace(it, _s1.length(), _s2);
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
