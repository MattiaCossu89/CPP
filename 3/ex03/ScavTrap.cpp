/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:20:09 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 13:09:15 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const str	ScavTrap::challenges[NVDE] = { "indovina?", "non hai idea di che brutta situazione sia questa", "tira un dado a sei facce se fai 7 vinci", "chiama la sfinge che è più preparata di lui", "sta volta non ha voglia di fare nessuna challenge" };

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m e' giunto sulla terra" << std::endl;
}

ScavTrap::ScavTrap(const str &name_) : ClapTrap(name_, 100, 100, 50, 50, 1, 20, 15, 3)
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
	std::cout << "SC4V_TP \033[31m" << this->getName() << "\033[0m Esplode in mille pezzi"<< std::endl;
}

void	ScavTrap::rangedAttack(ClapTrap &target) const
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m lancia lattine di birra.. contro \033[31m" << target.getName() << " \033[0m.. Piene.. che spreco (range), causing " << this->getRangedDmg() << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(ClapTrap &target) const
{
	std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m usa Pugno del Serpente Ubriaco (eggia' i serpenti non hanno le mani) contro \033[31m" << target.getName() << "\033[0m (melee), causing " << this->getMeleeDmg() << " points of damage!" << std::endl;
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
	if (this->ClapTrap::beRepaired(amount))
		std::cout << "SC4V_TP \033[32m" << this->getName() << "\033[0m va in letargo (restore " << "\033[32m" << amount << "\033[0m life points!)" << std::endl;
}


void	ScavTrap::challengeNewcomer(ClapTrap &target)
{
	if (!this->useEnergy(25))
	{
		std::cout << this->getName() << " has no more energy for challenging anyone" << std::endl;
		return ;
	}
	std::cout << "SC4V_TP " GREEN << this->getName() << NRM " " << challenges[rand() % NVDE] << " VS " RED << target.getName() << NRM << std::endl;
}

