/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:19:24 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 15:21:36 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define UI unsigned int
#define str std::string
#define NN 2
#define NS 2
#define NMB 1
#define NMD 1

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		str	name;
		UI	life;
		UI	maxlife;
		UI	mc2;
		UI	maxmc2;
		UI	level;
		UI	meleeDmg;
		UI	rangedDmg;
		UI	armor;

		static const str	names[NN];
		static const str	surNames[NS];
		static bool			first;

		static const str	randName();
		ClapTrap();
	public:
		ClapTrap(const str &name, UI life, UI maxlife, UI mc2, UI maxmc2, UI level, UI meleeDmg, UI rangedDmg, UI armor);
		ClapTrap(UI life_, UI maxlife_, UI mc2_, UI maxmc2_, UI level_, UI meleeDmg_, UI rangedDmg_, UI armor_);
		ClapTrap(const ClapTrap &cpy);
		ClapTrap &operator=(const ClapTrap &cpy);
		~ClapTrap();
		virtual void	rangedAttack(ClapTrap &target) const = 0;
		virtual void	meleeAttack(ClapTrap &target) const = 0;
		virtual str		identify() const = 0;
		int		takeDamage(UI &amount);
		int		beRepaired(UI &amount);
		bool	useEnergy(UI amount);
		str		getName() const;
		UI		getRangedDmg() const;
		UI		getMeleeDmg() const;
};
