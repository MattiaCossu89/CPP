/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:05:24 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:05:26 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(str const & type) : _type(type), _xp(0)
{

}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &copy)
{
	_xp = copy._xp;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

UI AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
