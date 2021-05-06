/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:12 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:13 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const str &name_) : Victim(name_)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy)
{
	*this = copy;
}

Peon &Peon::operator=(const Peon &copy)
{
	Victim (*this) = Victim(copy);
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

o_stream &operator<<(o_stream &os, const Peon &Peon)
{
	os << "I'm " << Peon.getName() << " and I like otters!" << std::endl;
	return os;
}
