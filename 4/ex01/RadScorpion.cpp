/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:50 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 13:29:57 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, RED "RadScorpion" NRM)
{
	std::cout << GREEN "* click click click *" NRM << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(copy) {}

RadScorpion &RadScorpion::operator=(const RadScorpion &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << RED "* SPROTCH *" NRM << std::endl;
}

void		RadScorpion::takeDamage(int dmg)
{
	this->Enemy::takeDamage(dmg);
}
