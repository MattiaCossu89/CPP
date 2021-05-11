/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:44 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 13:30:25 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon(YELLOW "Power Fist" NRM, 8, 50) {}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy) {}

PowerFist &PowerFist::operator=(const PowerFist &copy)
{
	this->name = copy.name;
	this->apcost = copy.apcost;
	this->damage = copy.damage;
	return (*this);
}

PowerFist::~PowerFist() {}

void	PowerFist::attack() const
{
	std::cout << BLUE "* pschhh... SBAM! *" NRM << std::endl;
}
