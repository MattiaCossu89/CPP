/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:19 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 15:33:03 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

#define NVDE 5

class FragTrap : public virtual ClapTrap
{
	private:
		typedef struct	s_vde
		{
			str	message;
			UI	dmg;
		}				t_vde;
		static const t_vde	vde_attacks[NVDE];
	public:
		FragTrap();
		FragTrap(const str &name);
		FragTrap(const FragTrap &cpy);
		FragTrap &operator=(const FragTrap &cpy);
		~FragTrap();
		virtual void	rangedAttack(ClapTrap &target) const;
		virtual void	meleeAttack(ClapTrap &target) const;
		virtual str		identify() const;
		void	vaulthunter_dot_exe(ClapTrap &target);
		void	takeDamage(UI amount);
		void	beRepaired(UI amount);
};
