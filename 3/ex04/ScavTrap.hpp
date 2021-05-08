/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:20:05 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:59:27 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define UI unsigned int
#define NCN 5

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
	private:
		static const std::string	challenges[NCN];
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap &operator=(const ScavTrap &cpy);
		~ScavTrap();
		virtual void	rangedAttack(ClapTrap &target) const;
		virtual void	meleeAttack(ClapTrap &target) const;
		virtual std::string		identify() const;
		void	challengeNewcomer(ClapTrap &target);
		int	takeDamage(UI &amount);
		int	beRepaired(UI &amount);
};
