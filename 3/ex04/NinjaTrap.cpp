/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:19:59 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 13:10:34 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NJ4_TP \033[32m" << this->getName() << "\033[0m e' nato nel silenzio piu assoluto" << std::endl;
}

NinjaTrap::NinjaTrap(const str &name_) : ClapTrap(name_, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NJ4_TP \033[32m" << this->getName() << "\033[0m " << "e' nato nel silenzio piu assoluto" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &cpy) : ClapTrap(cpy)
{
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &cpy)
{
	this->ClapTrap::operator=(cpy);
	return (*this);
}


NinjaTrap::~NinjaTrap()
{
	std::cout << "NJ4_TP \033[31m" << this->getName() << "\033[0m ssshhh (scompare)"<< std::endl;
}

void	NinjaTrap::rangedAttack(ClapTrap &target) const
{
	std::cout << "NJ4_TP \033[32m" << this->getName() << "\033[0m lancia shuriken in tutte le direzioni colpisce \033[31m" << target.getName() << "\033[0m dritto nell'occhio (range), causing " << this->getRangedDmg() << " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(ClapTrap &target) const
{
	std::cout << this->identify() << " \033[32m" << this->getName() << "\033[0m usa la spada del Panda Morbidoso contro \033[31m" << target.getName() << "\033[0m (melee), causing " << this->getMeleeDmg() << " points of damage!" << std::endl;
}

str		NinjaTrap::identify() const
{
	return ("NJ4_TP");
}

void	NinjaTrap::takeDamage(UI amount)
{
	int life = this->ClapTrap::takeDamage(amount);
	std::cout << "NJ4_TP \033[31m" << this->getName() << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
}

void	NinjaTrap::beRepaired(UI amount)
{
	if (this->ClapTrap::beRepaired(amount))
		std::cout << "NJ4_TP \033[32m" << this->getName() << "\033[0m si mangia un uramaki e recupera " << "\033[32m" << amount << "\033[0m HP!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	if (!this->useEnergy(25))
	{
		std::cout << this->getName() << " e' stanco di combattere" << std::endl;
		return ;
	}
	std::cout << this->identify() << this->getName() << " RASENGANNNNN" << " VS " << target.getName() << std::endl;
	target.takeDamage(60);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	if (!this->useEnergy(25))
	{
		std::cout << this->getName() << " e' stanco di combattere" << std::endl;
		return ;
	}
	std::cout << this->identify() << this->getName() << " lancia BALLA DI FUOCO SUPREMA" << " VS " << target.getName() << std::endl;
	target.takeDamage(60);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (!this->useEnergy(25))
	{
		std::cout << this->getName() << " e' stanco di combattere" << std::endl;
		return ;
	}
	std::cout << this->identify() << this->getName() << " SASKEEE!! NARUTOOOO!! SASKEEEEEE!!!! NARUTOOOOOOO!! " << " VS " << target.getName() << std::endl;
	target.takeDamage(60);
}
