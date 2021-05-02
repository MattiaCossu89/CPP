/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Resolver.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:33:08 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:33:08 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

#include <string>
#include <sstream>

class Resolver
{
	private:
		std::string	expr;
		Fixed		res;
		Resolver();
	public:
		Resolver(std::string expr);
		~Resolver();
		Fixed	getSolution() const;
};

Resolver::Resolver(std::string expr)
{
}

Resolver::~Resolver()
{
}
