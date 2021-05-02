/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:29:16 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:29:17 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string ZombieEvent::names[10] = {"Mathijs", "Zenas", "Pirnal", "Famine", "Beasts", "Phedan", "Sword", "Mexont", "Genar", "Mur"};

ZombieEvent::ZombieEvent()
{
	srand(time(0));
}

void	ZombieEvent::setZombieType(Type type_)
{
	type = type_;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, type));
}

void	ZombieEvent::randomChump()
{
	Zombie z = Zombie();
	z.setType(type);
	z.setName(names[rand() % 10]);
	z.announce();
}
