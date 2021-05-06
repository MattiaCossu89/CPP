/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:13 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:07:15 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name_) : name(name_), AP(40), weap(0)
{

}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{

}

Character &Character::operator=(const Character &copy)
{
	name = copy.name;
	AP = copy.AP;
	weap = copy.weap;
	return (*this);
}

void		Character::recoverAP()
{
	if (AP + 10 > 40)
		AP = 40;
	else
		AP += 10;
}

void		Character::equip(AWeapon* w)
{
	weap = w;
}

void		Character::attack(Enemy* e)
{
	if (AP - weap->getAPCost() <= 0 || !weap)
		return ;
	std::cout << name << " attacks " << e->getType() << " with a " << weap->getName() << std::endl;
	weap->attack();
	AP -= weap->getAPCost();
	e->takeDamage(weap->getDamage());
	if (e->getHP() <= 0)
		delete (e);
}

str const	&Character::getName() const
{
	return (name);
}

int			Character::getAP() const
{
	return (AP);
}

const AWeapon *Character::getWeapon() const
{
	return (weap);
}

std::ostream &operator<<(std::ostream &os, const Character &c)
{
	if (c.getWeapon())
		os << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		os << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return (os);
}
