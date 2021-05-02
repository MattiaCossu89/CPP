/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:30:06 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:30:07 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string	name;
		Weapon		&weap;
	public:
		HumanA(std::string name, Weapon &weap);
		void	setWeapon(Weapon& weapon);
		void	attack();
};
