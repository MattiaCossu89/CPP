/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:16 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 16:36:52 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define vde FragTrap::t_vde

const vde	FragTrap::vde_attacks[NVDE] = { {"spacca una bottiglia e tagliuzza un po tutti", 30}, {"spara con una pistola ad acqua TERRIBILE!!", 70}, {"chiede che senso ha tutto questo.. domanda troppo difficile!!", 50}, {"EMMOHBBASTA", 10}, {"manda qualche porco stile veneto verso", 20} };

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
	std::cout << "BUUUUUUUMMMMM! FR4G_TP \033[31m" << this->getName() << "\033[0m Destroyed"<< std::endl;
}

void	FragTrap::rangedAttack(ClapTrap &target) const
{
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m tira un sacco di bulloni a \033[31m" << target.getName() << "\033[0m (range), causing " << this->getRangedDmg() << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(ClapTrap &target) const
{
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m sfodera la sua MACHECA..NESO contro \033[31m" << target.getName() << "\033[0m (melee), causing " << this->getMeleeDmg() << " points of damage!" << std::endl;
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
		std::cout << this->getName() << " ha finito le cartucce" << std::endl;
		return ;
	}
	att = vde_attacks[rand() % NVDE];
	std::cout << "FR4G_TP " << this->getName() << " " << att.message << " VS " << target.getName() << " causing " << att.dmg << " damages" << std::endl;
	target.takeDamage(att.dmg);
}


void	FragTrap::takeDamage(UI amount)
{
	int life = this->ClapTrap::takeDamage(amount);
	std::cout << "FR4G_TP \033[31m" << this->getName() << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
}

void	FragTrap::beRepaired(UI amount)
{
	this->ClapTrap::beRepaired(amount);
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m si fa un sonnellino repairs himself of  " << "\033[32m" << amount << "\033[0m points!" << std::endl;
}

