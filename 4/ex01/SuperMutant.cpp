/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:58 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 13:31:28 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, CYAN "Super Mutant" NRM)
{
	std::cout << GREEN "Gaaah. Me want smash heads!" NRM << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy) {}

SuperMutant &SuperMutant::operator=(const SuperMutant &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << RED "Aaargh..." NRM << std::endl;
}

void		SuperMutant::takeDamage(int dmg)
{
	this->Enemy::takeDamage(dmg - 3);
}
