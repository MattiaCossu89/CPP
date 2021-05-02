/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:30:14 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:30:14 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		std::string	name;
		Weapon		*weap;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
		void	attack();
};
