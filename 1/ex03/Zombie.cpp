/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:29:27 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:29:28 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string typeToString(Type type)
{
	std::string stype;
	switch (type)
	{
	case Generic:
		stype = "Generic";
		break;
	case Voodoo:
		stype = "Voodoo";
		break;
	case Runner:
		stype = "Runner";
		break;
	default:
		break;
	}
	return (stype);
}

Zombie::Zombie() : name(""), type(Generic){}

Zombie::Zombie(std::string name) : name(name), type(Generic){}

Zombie::Zombie(std::string name, Type type) : name(name), type(type){}

Zombie::~Zombie()
{
	std::cout << "<" << name << " (" << typeToString(type) << ")> " << "Aaaaarggg!! [Zombie is finally really died]" << std::endl;
}

std::string Zombie::getName()
{
	return this->name;
}
void Zombie::setName(std::string name)
{
	this->name = name;
}
Type Zombie::getType()
{
	return this->type;
}
void Zombie::setType(Type type)
{
	this->type = type;
}
void Zombie::announce()
{
	std::cout << "<" << name << " (" << typeToString(type) << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
