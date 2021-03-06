/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:30:03 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:30:04 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon &weapon): name(name_), weap(weapon){}

void	HumanA::setWeapon(Weapon& weapon)
{
	weap = weapon;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with his " << weap.getType() << std::endl;
}
