/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:16 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:58:37 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define vde FragTrap::t_vde

const vde	FragTrap::vde_attacks[NVDE] = { {"spacca una bottiglia e tagliuzza un po tutti", 30}, {"spara con una pistola ad acqua TERRIBILE!!", 70}, {"chiede che senso ha tutto questo.. domanda troppo difficile!!", 50}, {"EMMOHBBASTA", 10}, {"manda qualche porco stile veneto verso", 20} };

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m is Born!!" << std::endl;
}

FragTrap::FragTrap(const std::string &name_) : ClapTrap(name_, 100, 100, 100, 100, 1, 30, 20, 5)
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
	UI dmg = this->ClapTrap::getRangedDmg();
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m tira un sacco di bulloni a \033[31m" << target.getName() << "\033[0m (range), causing ";
	target.takeDamage(dmg);
}

void	FragTrap::meleeAttack(ClapTrap &target) const
{
	UI dmg = this->ClapTrap::getMeleeDmg();
	std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m sfodera la sua MACHECA..NESO contro \033[31m" << target.getName() << "\033[0m (melee), causing " << this->getMeleeDmg() << " points of damage!" << std::endl;
	target.takeDamage(dmg);
}

std::string		FragTrap::identify() const
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
	std::cout << "FR4G_TP " GREEN << this->getName() << NRM " " << att.message << " VS " RED << target.getName() << NRM " causing ";
	target.takeDamage(att.dmg);
}

int	FragTrap::takeDamage(UI &amount)
{
	int life = this->ClapTrap::takeDamage(amount);
	std::cout << "FR4G_TP \033[31m" << this->getName() << "\033[0m take " << (life ? "\033[33m" : "\033[31m") << amount << "\033[0m points of damage!" << std::endl;
	return (amount);
}

int	FragTrap::beRepaired(UI &amount)
{
	if (this->ClapTrap::beRepaired(amount))
		std::cout << "FR4G_TP \033[32m" << this->getName() << "\033[0m repairs himself of " << "\033[32m" << amount << "\033[0m points!" << std::endl;
	return (amount);
}
