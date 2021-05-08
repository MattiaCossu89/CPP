/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:20:09 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:59:27 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string	ScavTrap::challenges[NCN] = { "hi man", "hi man", "hi man", "hi man", "hi man" };

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m e' giunto sulla terra" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name_) : ClapTrap(name_, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m " << "e' giunto sulla terra" << std::endl;
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
	UI dmg = this->ClapTrap::getRangedDmg();
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m lancia lattine di birra.. contro \033[31m" << target.getName() << " \033[0m.. Piene.. che spreco (range), causing ";
	target.takeDamage(dmg);
}

void	ScavTrap::meleeAttack(ClapTrap &target) const
{
	UI dmg = this->ClapTrap::getMeleeDmg();
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m usa Pugno del Serpente Ubriaco (eggia' i serpenti non hanno le mani) contro \033[31m" << target.getName() << "\033[0m (melee), causing ";
	target.takeDamage(dmg);
}


std::string		ScavTrap::identify() const
{
	return ("SC4V_TP");
}

int	ScavTrap::takeDamage(UI &amount)
{
	int life = this->ClapTrap::takeDamage(amount);
	std::cout << "SC4V_TP \033[31m" << this->getName() << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
	return (amount);
}

int	ScavTrap::beRepaired(UI &amount)
{
	if (this->ClapTrap::beRepaired(amount))
		std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m va in letargo (restore " << "\033[32m" << amount << "\033[0m life points!)" << std::endl;
	return (amount);
}


void	ScavTrap::challengeNewcomer(ClapTrap &target)
{
	if (!this->useEnergy(25))
	{
		std::cout << this->getName() << " has no more energy for challenging anyone" << std::endl;
		return ;
	}
	std::cout << "SC4V_TP " GREEN << this->getName() << NRM " " << challenges[rand() % NCN] << " VS " RED << target.getName() << NRM << " causing ";
}

