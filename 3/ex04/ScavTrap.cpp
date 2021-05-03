/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:20:09 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 16:36:48 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const str	ScavTrap::challenges[NCN] = { "hi man", "hi man", "hi man", "hi man", "hi man" };

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m is Born!!" << std::endl;
}

ScavTrap::ScavTrap(const str &name_) : ClapTrap(name_, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m " << "is Born!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
	this->ClapTrap::operator=(cpy);
	return (*this);
}


ScavTrap::~ScavTrap()
{
	std::cout << "SC4V_TP \033[31m" << this->getName() << "\033[0m "<< std::endl;
}

void	ScavTrap::rangedAttack(ClapTrap &target) const
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m attacks \033[31m" << target.getName() << "\033[0m at range, causing " << this->getRangedDmg() << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(ClapTrap &target) const
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m attacks \033[31m" << target.getName() << "\033[0m with melee attack, causing " << this->getMeleeDmg() << " points of damage!" << std::endl;
}

str		ScavTrap::identify() const
{
	return ("SC4V_TP");
}

void	ScavTrap::takeDamage(UI amount)
{
	int life = this->ClapTrap::takeDamage(amount);
	std::cout << "SC4V_TP \033[31m" << this->getName() << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(UI amount)
{
	this->ClapTrap::beRepaired(amount);

	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m repairs himself of  " << "\033[32m" << amount << "\033[0m points!" << std::endl;
}


void	ScavTrap::challengeNewcomer(ClapTrap &target)
{
	if (!this->useEnergy(25))
	{
		std::cout << this->getName() << " has no more energy for challenging anyone" << std::endl;
		return ;
	}
	std::cout << "SC4V_TP " << this->getName() << " " << challenges[rand() % NCN] << " VS " << target.getName() << std::endl;
}

