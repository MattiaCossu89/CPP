/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:25 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:26 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const str &name_, const str &title_) : name(name_), title(title_)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &copy)
{
	name = copy.name;
	title = copy.title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

str	Sorcerer::getName() const
{
	return (name);
}

str	Sorcerer::getTitle() const
{
	return (title);
}

void	Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}


o_stream &operator<<(o_stream &os, const Sorcerer &Sorcerer)
{
	os << "I am " << Sorcerer.getName() << ", " << Sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}
