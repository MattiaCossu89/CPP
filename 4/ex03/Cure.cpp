/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:05:38 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:06:57 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	_type = "cure";
}

Cure::~Cure()
{

}

Cure &Cure::operator=(const Cure &copy)
{
	_type = "cure";
	_xp = copy._xp;
	return (*this);
}
Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	this->AMateria::use(target);
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
