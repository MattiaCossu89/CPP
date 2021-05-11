/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:37 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 13:31:49 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon(YELLOW "Plasma Rifle" NRM, 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy) {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &copy)
{
	this->name = copy.name;
	this->apcost = copy.apcost;
	this->damage = copy.damage;
	return (*this);
}

PlasmaRifle::~PlasmaRifle() {}

void	PlasmaRifle::attack() const
{
	std::cout << BLUE "* piouuu piouuu piouuu *" NRM << std::endl;
}
