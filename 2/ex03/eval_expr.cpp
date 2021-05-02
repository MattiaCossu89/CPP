/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:32:52 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:32:53 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include <sstream>
#include <string>

bool checkExpression(std::string exp)
{
	std::string checker = "";
	std::string numbers = "0123456789.";
	std::string ops = "/*+-";
	std::string possibilities = "() ";
	possibilities += numbers + ops;
	bool dot = false;
	char last = 0;
	for (std::string::iterator it = exp.begin(); it != exp.end(); it++)
	{
		if (possibilities.find(*it) == std::string::npos)
			return (false);
		if (*it == '(' && last != ')' && (!isdigit(last) && last != '.'))
			checker.append("(");
		else if (*it == '(')
			return (false);
		else if (*it == ')' && checker.length() && (last == '.' || isdigit(last)))
			checker.resize(checker.length() - 1);
		else if (*it == ')' && (!checker.length() || !(last == '.' || isdigit(last))))
			return (false);
		if (*it == '.' && !dot)
			dot = true;
		else if ((last  == ')' && *it == '(') || (*it == '.' && dot))
			return (false);
		else if (*it != '.' || !isdigit(*it))
			dot = false;
		if (*it != ' ' || isdigit(*(it - 1)))
			last = *it;
	}
	if (!checker.length())
		return (true);
	return (false);
}

int main(int ac, const char **av)
{
	if (ac != 2)
	{
		std::cout << "\033[31mInvalid Arguments\033[0m" << std::endl;
		return (1);
	}
	if (checkExpression(av[1]))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Invalid" << std::endl;
	return (0);
}
