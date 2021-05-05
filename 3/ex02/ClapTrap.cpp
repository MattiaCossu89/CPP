/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:19:20 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 17:14:33 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const str	ClapTrap::names[NN] = { "B00B13-TP", "B34I2-TP", "D3TH-TP", "H0U5E-TP", "T4CO-TP", "N4P-TP", "F4P-TP", "S14P-TP", "M0U5-TP", "J0XS-TP", "IT54-TP" };

bool		ClapTrap::first = true;

const str	ClapTrap::randName()
{
	return (names[rand() % NN]);
}

ClapTrap::ClapTrap(const str &name_, UI life_, UI maxlife_, UI mc2_, UI maxmc2_, UI level_, UI meleeDmg_, UI rangedDmg_, UI armor_) :
name(name_), life(life_), maxlife(maxlife_), mc2(mc2_), maxmc2(maxmc2_), level(level_), meleeDmg(meleeDmg_), rangedDmg(rangedDmg_), armor(armor_)
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	std::cout << "CL4P_TP module created" << std::endl;
}

ClapTrap::ClapTrap(UI life_, UI maxlife_, UI mc2_, UI maxmc2_, UI level_, UI meleeDmg_, UI rangedDmg_, UI armor_) :
name(randName()), life(life_), maxlife(maxlife_), mc2(mc2_), maxmc2(maxmc2_), level(level_), meleeDmg(meleeDmg_), rangedDmg(rangedDmg_), armor(armor_)
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	std::cout << "CL4P_TP module created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
	name = cpy.name;
	life = cpy.life;
	maxlife = cpy.maxlife;
	mc2 = cpy.mc2;
	maxmc2 = cpy.maxmc2;
	level = cpy.level;
	meleeDmg = cpy.meleeDmg;
	rangedDmg = cpy.rangedDmg;
	armor = cpy.armor;
	return (*this);
}


ClapTrap::~ClapTrap()
{
	std::cout << "CL4P_TP module destoryed" << std::endl;
}

int	ClapTrap::takeDamage(UI &amount)
{
	amount -= armor;
	if (amount > life && (amount = life)) life = 0;
	else life -= amount;
	return (life);
}

int	ClapTrap::beRepaired(UI &amount)
{
	if (life + amount > maxlife) { life = maxlife; amount = maxlife - life;}
	else life += amount;
	return (life);
}

bool	ClapTrap::useEnergy(UI amount)
{
	if (amount > mc2)
		return (false);
	mc2 -= amount;
	return (true);
}

str		ClapTrap::getName() const
{
	return (name);
}

UI		ClapTrap::getRangedDmg() const
{
	return (rangedDmg);
}

UI		ClapTrap::getMeleeDmg() const
{
	return (meleeDmg);
}