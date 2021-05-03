/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:20:05 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 15:33:56 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define UI unsigned int
#define str std::string
#define NCN 5

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
	private:
		static const str	challenges[NCN];
	public:
		ScavTrap();
		ScavTrap(const str &name);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap &operator=(const ScavTrap &cpy);
		~ScavTrap();
		virtual void	rangedAttack(ClapTrap &target) const;
		virtual void	meleeAttack(ClapTrap &target) const;
		virtual str		identify() const;
		void	challengeNewcomer(ClapTrap &target);
		void	takeDamage(UI amount);
		void	beRepaired(UI amount);
};
