/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:19 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:53:32 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define UI unsigned int
#define NN 11
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
			std::string	message;
			UI	dmg;
		}				t_vde;

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
		static const std::string	surNames[NS];
		static const std::string	messBorn[NMB];
		static const std::string	messDestroy[NMD];
		static const t_vde	vde_attacks[NVDE];
		static bool			first;

		static const std::string	randName();
		static const std::string	&randBornMessage();
		static const std::string	&randDestroyMessage();
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &cpy);
		FragTrap &operator=(const FragTrap &cpy);
		~FragTrap();
		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	vaulthunter_dot_exe(std::string const &target);
		int	takeDamage(UI &amount);
		int	beRepaired(UI &amount);
		std::string		getName();
};
