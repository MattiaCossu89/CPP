/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:19 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:59:27 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define UI unsigned int
#define NVDE 5

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class FragTrap : public virtual ClapTrap
{
	private:
		typedef struct	s_vde
		{
			std::string	message;
			UI	dmg;
		}				t_vde;
		static const t_vde	vde_attacks[NVDE];
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &cpy);
		FragTrap &operator=(const FragTrap &cpy);
		~FragTrap();
		virtual void	rangedAttack(ClapTrap &target) const;
		virtual void	meleeAttack(ClapTrap &target) const;
		virtual std::string		identify() const;
		void	vaulthunter_dot_exe(ClapTrap &target);
		int	takeDamage(UI &amount);
		int	beRepaired(UI &amount);
};
