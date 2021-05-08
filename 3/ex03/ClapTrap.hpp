/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:19:54 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:49:43 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "colors.hpp"

#include <iostream>
#include <string>
#include <sstream>

#define UI unsigned int
#define NN 11
#define NMB 1
#define NMD 1

class ClapTrap
{
	private:
		std::string	name;
		UI	life;
		UI	maxlife;
		UI	mc2;
		UI	maxmc2;
		UI	level;
		UI	meleeDmg;
		UI	rangedDmg;
		UI	armor;

		static const std::string	names[NN];
		static int			vers[NN];
		static bool			first;

		static const std::string	randName();
		ClapTrap();
	public:
		ClapTrap(const std::string &name, UI life, UI maxlife, UI mc2, UI maxmc2, UI level, UI meleeDmg, UI rangedDmg, UI armor);
		ClapTrap(UI life_, UI maxlife_, UI mc2_, UI maxmc2_, UI level_, UI meleeDmg_, UI rangedDmg_, UI armor_);
		ClapTrap(const ClapTrap &cpy);
		ClapTrap &operator=(const ClapTrap &cpy);
		~ClapTrap();
		virtual void	rangedAttack(ClapTrap &target) const = 0;
		virtual void	meleeAttack(ClapTrap &target) const = 0;
		virtual std::string		identify() const = 0;
		virtual int		takeDamage(UI &amount);
		virtual int		beRepaired(UI &amount);
		bool	useEnergy(UI amount);
		std::string		getName() const;
		UI		getRangedDmg() const;
		UI		getMeleeDmg() const;
};
