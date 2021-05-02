/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:29:19 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:29:20 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class ZombieEvent
{
	private:
		Type				type;
		static std::string	names[10];
	public:
		ZombieEvent();
		void	setZombieType(Type type);
		Zombie	*newZombie(std::string name);
		void	randomChump();
};
