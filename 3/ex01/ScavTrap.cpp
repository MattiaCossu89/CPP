/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:19:08 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 11:53:28 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const str	ScavTrap::names[NN] = { "B00B13-TP", "B34I2-TP", "D3TH-TP", "H0U5E-TP", "T4CO-TP", "N4P-TP", "F4P-TP", "S14P-TP", "M0U5-TP", "J0XS-TP", "IT54-TP" };

const str	ScavTrap::surNames[NS] = { "il Bello", "il Brutto" };

const str	ScavTrap::messBorn[NMB] = { "is born!" };

const str	ScavTrap::messDestroy[NMD] = { "is destroyed!" };

const str	ScavTrap::challenges[NVDE] = { "indovina?", "non hai idea di che brutta situazione sia questa", "tira un dado a sei facce se fai 7 vinci", "chiama la sfinge che è più preparata di lui", "sta volta non ha voglia di fare nessuna challenge" };

bool		ScavTrap::first = true;

const str	ScavTrap::randName()
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	return (names[rand() % NN]);
}

const str	&ScavTrap::randBornMessage()
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	return (messBorn[rand() % NMB]);
}

const str	&ScavTrap::randDestroyMessage()
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	return (messDestroy[rand() % NMD]);
}

ScavTrap::ScavTrap() : name(randName()), life(100), maxlife(100), mc2(50), maxmc2(50), level(1), meleeDmg(20), rangedDmg(15), armor(3)
{
	std::cout << "SC4V_TP \033[32m" << name << "\033[0m " << randBornMessage() << std::endl;
}

ScavTrap::ScavTrap(const str &name_) : name(name_), life(100), maxlife(100), mc2(50), maxmc2(50), level(1), meleeDmg(20), rangedDmg(15), armor(3)
{
	(void)level;
	(void)mc2;
	(void)maxmc2;
	std::cout << "SC4V_TP \033[32m" << name << "\033[0m " << randBornMessage() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	*this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
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


ScavTrap::~ScavTrap()
{
	std::cout << "SC4V_TP \033[31m" << name << "\033[0m Esplode in mille pezzi"<< std::endl;
}

void	ScavTrap::rangedAttack(str const &target) const
{
	std::cout << "SC4V_TP \033[32m" << name << "\033[0m lancia lattine di birra.. contro \033[31m" << target << "\033[0m (range), causing " << rangedDmg << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(str const &target) const
{
	std::cout << "SC4V_TP \033[32m" << name << "\033[0m usa Pugno del Serpente Ubriaco (eggia' i serpenti non hanno le mani) contro \033[31m" << target << "\033[0m (melee), causing " << meleeDmg << " points of damage!" << std::endl;
}

void	ScavTrap::challengeNewcomer(str const &target)
{
	if (mc2 < 25)
	{
		std::cout << name << " ha finito le batterie" << std::endl;
		return ;
	}
	mc2 -= 25;
	if (first)
	{
		srand(time(0));
		first = false;
	}
	std::cout << "SC4V_TP " << name << " " << challenges[rand() % NVDE] << " VS " << target << std::endl;
}


void	ScavTrap::takeDamage(UI amount)
{
	if (amount - armor > life && (amount = life)) life = 0;
	else life -= amount - armor;
	std::cout << "SC4V_TP \033[31m" << name << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(UI amount)
{
	if (life + amount > maxlife) { life = maxlife; amount = maxlife - life;}
	else life += amount;
	std::cout << "SC4V_TP \033[32m" << name << "\033[0m va in letargo (restore " << "\033[32m" << amount << "\033[0m life points!)" << std::endl;
}

str		ScavTrap::getName()
{
	return (name);
}
