/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:20:01 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:59:27 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define UI unsigned int
#define NVDE 5

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string>
#include <iostream>

class NinjaTrap : public virtual ClapTrap
{
	private:
		static const std::string	challenges[NVDE];
	public:
		NinjaTrap();
		NinjaTrap(const std::string &name);
		NinjaTrap(const NinjaTrap &cpy);
		NinjaTrap &operator=(const NinjaTrap &cpy);
		~NinjaTrap();
		virtual void	rangedAttack(ClapTrap &target) const;
		virtual void	meleeAttack(ClapTrap &target) const;
		virtual std::string		identify() const;
		void	ninjaShoebox(FragTrap &target);
		void	ninjaShoebox(ScavTrap &target);
		void	ninjaShoebox(NinjaTrap &target);
		int	takeDamage(UI &amount);
		int	beRepaired(UI &amount);
};
