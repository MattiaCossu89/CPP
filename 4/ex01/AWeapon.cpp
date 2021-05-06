/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:06 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:07:07 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(str const & name_, int apcost_, int damage_) : name(name_), apcost(apcost_), damage(damage_)
{

}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator=(const AWeapon &copy)
{
	name = copy.name;
	apcost = copy.apcost;
	damage = copy.damage;
	return (*this);
}

AWeapon::~AWeapon()
{

}

str const		&AWeapon::getName() const
{
	return (name);
}

int				AWeapon::getAPCost() const
{
	return (apcost);
}

int				AWeapon::getDamage() const
{
	return (damage);
}
