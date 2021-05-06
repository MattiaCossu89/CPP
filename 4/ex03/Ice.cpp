/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:05:45 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:05:47 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	_type = "ice";
}

Ice::~Ice()
{

}

Ice &Ice::operator=(const Ice &copy)
{
	_type = "ice";
	_xp = copy._xp;
	return (*this);
}
Ice *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	this->AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
