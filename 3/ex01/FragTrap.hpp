/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:19 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 18:32:58 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define UI unsigned int
#define str std::string
#define NN 2
#define NS 2
#define NMB 1
#define NMD 1
#define NVDE 5

#include <string>
#include <iostream>

class FragTrap
{
	private:
		typedef struct	s_vde
		{
			str	message;
			UI	dmg;
		}				t_vde;

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
		static const str	messBorn[NMB];
		static const str	messDestroy[NMD];
		static const t_vde	vde_attacks[NVDE];
		static bool			first;

		static const str	randName();
		static const str	&randBornMessage();
		static const str	&randDestroyMessage();
	public:
		FragTrap();
		FragTrap(const str &name);
		FragTrap(const FragTrap &cpy);
		FragTrap &operator=(const FragTrap &cpy);
		~FragTrap();
		void	rangedAttack(str const &target) const;
		void	meleeAttack(str const &target) const;
		void	vaulthunter_dot_exe(str const &target);
		void	takeDamage(UI amount);
		void	beRepaired(UI amount);
		str		getName();
};
