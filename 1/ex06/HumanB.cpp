/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:30:10 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:30:11 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_): name(name_), weap(0){}

void	HumanB::setWeapon(Weapon& weapon)
{
	weap = &weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << weap->getType() << std::endl;
}
