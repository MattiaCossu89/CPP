/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:16 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 17:19:29 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define vde FragTrap::t_vde

const str	FragTrap::names[NN] = { "B00B13-TP", "B34I2-TP", "D3TH-TP", "H0U5E-TP", "T4CO-TP", "N4P-TP", "F4P-TP", "S14P-TP", "M0U5-TP", "J0XS-TP", "IT54-TP" };

const str	FragTrap::surNames[NS] = { "il Bello", "il Brutto" };

const str	FragTrap::messBorn[NMB] = { "is born!" };

const str	FragTrap::messDestroy[NMD] = { "is destroyed!" };

const vde	FragTrap::vde_attacks[NVDE] = { {"spacca una bottiglia e tagliuzza un po tutti", 30}, {"spara con una pistola ad acqua TERRIBILE!!", 70}, {"chiede che senso ha tutto questo.. domanda troppo difficile!!", 50}, {"EMMOHBBASTA", 10}, {"manda qualche porco stile veneto verso", 20} };

bool		FragTrap::first = true;

const str	FragTrap::randName()
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	return (names[rand() % NN]);
}

const str	&FragTrap::randBornMessage()
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	return (messBorn[rand() % NMB]);
}

const str	&FragTrap::randDestroyMessage()
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	return (messDestroy[rand() % NMD]);
}

FragTrap::FragTrap() : name(randName()), life(100), maxlife(100), mc2(100), maxmc2(100), level(1), meleeDmg(30), rangedDmg(20), armor(5)
{
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m " << randBornMessage() << std::endl;
}

FragTrap::FragTrap(const str &name_) : name(name_), life(100), maxlife(100), mc2(100), maxmc2(100), level(1), meleeDmg(30), rangedDmg(20), armor(5)
{
	(void)level;
	(void)mc2;
	(void)maxmc2;
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m " << randBornMessage() << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	*this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
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


FragTrap::~FragTrap()
{
	std::cout << "FR4G_TP \033[31m" << name << "\033[0m " << randDestroyMessage() << std::endl;
}

void	FragTrap::rangedAttack(str const &target) const
{
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m tira un sacco di bulloni a \033[31m" << target << "\033[0m at range, causing " << rangedDmg << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(str const &target) const
{
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m sfodera la sua MACHECA..NESO contro \033[31m" << target << "\033[0m with melee attack, causing " << meleeDmg << " points of damage!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(str const &target)
{
	vde att;
	if (mc2 < 25)
	{
		std::cout << name << "has no more energy" << std::endl;
		return ;
	}
	mc2 -= 25;
	if (first)
	{
		srand(time(0));
		first = false;
	}
	att = vde_attacks[rand() % NVDE];
	std::cout << "FR4G_TP " << name << " " << att.message << " VS " << target << " causing " << att.dmg << " damages" << std::endl;
}


void	FragTrap::takeDamage(UI amount)
{
	if (amount - armor > life && (amount = life)) life = 0;
	else life -= amount - armor;
	std::cout << "FR4G_TP \033[31m" << name << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
}

void	FragTrap::beRepaired(UI amount)
{
	if (life + amount > maxlife) { life = maxlife; amount = maxlife - life;}
	else life += amount;
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m si fa un sonnellino repairs himself of  " << "\033[32m" << amount << "\033[0m points!" << std::endl;
}

str		FragTrap::getName()
{
	return (name);
}
