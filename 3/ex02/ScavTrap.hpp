#pragma once

#define UI unsigned int
#define str std::string
#define NN 2
#define NS 2
#define NMB 1
#define NMD 1
#define NVDE 5

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
	private:
		static const str	challenges[NVDE];
	public:
		ScavTrap();
		ScavTrap(const str &name);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap &operator=(const ScavTrap &cpy);
		~ScavTrap();
		void	rangedAttack(ClapTrap &target) const;
		void	meleeAttack(ClapTrap &target) const;
		void	challengeNewcomer(ClapTrap &target);
		void	takeDamage(UI amount);
		void	beRepaired(UI amount);
};
