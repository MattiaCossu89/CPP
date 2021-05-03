/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:19:12 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 16:25:38 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define UI unsigned int
#define str std::string
#define NN 11
#define NS 2
#define NMB 1
#define NMD 1
#define NVDE 5

#include <string>
#include <iostream>

class ScavTrap
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
		static const str	messBorn[NMB];
		static const str	messDestroy[NMD];
		static const str	challenges[NVDE];
		static bool			first;

		static const str	randName();
		static const str	&randBornMessage();
		static const str	&randDestroyMessage();
	public:
		ScavTrap();
		ScavTrap(const str &name);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap &operator=(const ScavTrap &cpy);
		~ScavTrap();
		void	rangedAttack(str const &target) const;
		void	meleeAttack(str const &target) const;
		void	challengeNewcomer(str const &target);
		void	takeDamage(UI amount);
		void	beRepaired(UI amount);
		str		getName();
};
