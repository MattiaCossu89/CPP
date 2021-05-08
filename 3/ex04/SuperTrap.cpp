/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:30:44 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:15:49 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5)
{
	std::cout << "SUP_TP \033[32m" << this->getName() << "\033[0m SuperTrap in azione!!" << std::endl;
}

SuperTrap::SuperTrap(const std::string &name_) : ClapTrap(name_, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "SUP_TP \033[32m" << this->getName() << "\033[0m " << "SuperTrap in azione!!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &cpy) : ClapTrap(cpy)
{
}

SuperTrap &SuperTrap::operator=(const SuperTrap &cpy)
{
	this->ClapTrap::operator=(cpy);
	return (*this);
}


SuperTrap::~SuperTrap()
{
	std::cout << "SUP_TP \033[31m" << this->getName() << "\033[0m Incredibile l'arma suprema si e' rotta"<< std::endl;
}

void	SuperTrap::rangedAttack(ClapTrap &target) const
{
	this->FragTrap::meleeAttack(target);
}

void	SuperTrap::meleeAttack(ClapTrap &target) const
{
	this->NinjaTrap::meleeAttack(target);
}

std::string		SuperTrap::identify() const
{
	return ("SUP_TP");
}

int	SuperTrap::takeDamage(UI &amount)
{
	int life = this->ClapTrap::takeDamage(amount);
	std::cout << "SUP_TP \033[31m" << this->getName() << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
	return (amount);
}

int	SuperTrap::beRepaired(UI &amount)
{
	if (this->ClapTrap::beRepaired(amount))
		std::cout << "SUP_TP \033[32m" << this->getName() << "\033[0m si ricarica di " << "\033[32m" << amount << "\033[0m points!" << std::endl;
	return (amount);
}

void	SuperTrap::ninjaShoebox(SuperTrap &target)
{
	UI dmg = 60;
	if (!this->useEnergy(25))
	{
		std::cout << this->getName() << " dovrebbe riposarsi" << std::endl;
		return ;
	}
	std::cout << "SUP_TP " GREEN << this->getName() << NRM " " << " VS " RED << target.getName() << NRM << " causing ";
	target.takeDamage(dmg);
}

void	SuperTrap::ninjaShoebox(NinjaTrap &target)
{
	this->NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(FragTrap &target)
{
	this->NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(ScavTrap &target)
{
	this->NinjaTrap::ninjaShoebox(target);
}
