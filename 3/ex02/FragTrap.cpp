/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:16 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 18:41:18 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define vde FragTrap::t_vde

const vde	FragTrap::vde_attacks[NVDE] = { {"hi man", 30}, {"hi man", 30}, {"hi man", 30}, {"hi man", 30}, {"hi man", 30} };

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m is Born!!" << std::endl;
}

FragTrap::FragTrap(const str &name_) : ClapTrap(name_, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m " << "is Born!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
{
	this->ClapTrap::operator=(cpy);
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << "FR4G_TP \033[31m" << this->getName() << "\033[0m "<< std::endl;
}

void	FragTrap::rangedAttack(ClapTrap &target) const
{
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m attacks \033[31m" << target.getName() << "\033[0m at range, causing " << this->getRangedDmg() << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(ClapTrap &target) const
{
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m attacks \033[31m" << target.getName() << "\033[0m with melee attack, causing " << this->getMeleeDmg() << " points of damage!" << std::endl;
}

str		FragTrap::identify() const
{
	return ("FR4G_TP");
}

void	FragTrap::vaulthunter_dot_exe(ClapTrap &target)
{
	vde att;
	if (!this->useEnergy(25))
	{
		std::cout << this->getName() << " has no more energy" << std::endl;
		return ;
	}
	att = vde_attacks[rand() % NVDE];
	std::cout << "FR4G_TP " << this->getName() << " " << att.message << " VS " << target.getName() << " causing " << att.dmg << " damages" << std::endl;
}


void	FragTrap::takeDamage(UI amount)
{
	int life = this->ClapTrap::takeDamage(amount);
	std::cout << "FR4G_TP \033[31m" << this->getName() << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
}

void	FragTrap::beRepaired(UI amount)
{
	int life = this->ClapTrap::beRepaired(amount);
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m repairs himself of  " << "\033[32m" << amount << "\033[0m points!" << std::endl;
}

