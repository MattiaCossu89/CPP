/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:19:12 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:59:29 by mcossu           ###   ########.fr       */
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

class ScavTrap
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
		static const std::string	surNames[NS];
		static const std::string	messBorn[NMB];
		static const std::string	messDestroy[NMD];
		static const std::string	challenges[NVDE];
		static bool			first;

		static const std::string	randName();
		static const std::string	&randBornMessage();
		static const std::string	&randDestroyMessage();
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap &operator=(const ScavTrap &cpy);
		~ScavTrap();
		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	challengeNewcomer(std::string const &target);
		int	takeDamage(UI &amount);
		int	beRepaired(UI &amount);
		std::string		getName();
};
