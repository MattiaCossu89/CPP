/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:16 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 15:52:18 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const str	names[NN];

const str	surNames[NS];

const str	messBorn[NMB] = { "is born!" };

const str	messDestroy[NMD] = { "is destroyed!" };

bool		first = true;

const str	&FragTrap::randName()
{
	if (first)
	{
		srand(time(0));
		first = false;
	}
	return (names[rand() % NN] + " " + surNames[rand() % NS]);
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

FragTrap::FragTrap()
{
	FragTrap(randName());
}

FragTrap::FragTrap(const str &name_) : name(name_), life(100), maxlife(100), mc2(100), maxmc2(100), level(1), maleeAttack(30), rangeAttack(20), armor(5)
{
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m " << randBornMessage() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G_TP \033[31m" << name << "\033[0m " << randDestroyMessage() << std::endl;
}

void	FragTrap::rangedAttack(str const &target) const
{
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m attacks \033[31m" << target << "\033[0m at range, causing " << rangeAttack << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(str const &target) const
{
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m attacks \033[31m" << target << "\033[0m with melee attack, causing " << rangeAttack << " points of damage!" << std::endl;
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
	std::cout << "FR4G_TP \033[32m" << name << "\033[0m repairs himself of  " << "\033[32m" << amount << "\033[0m points!" << std::endl;
}

