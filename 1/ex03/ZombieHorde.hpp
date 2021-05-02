/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:29:37 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:29:38 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class ZombieHorde
{
	private:
		static std::string	names[20];
		Zombie				*zombies;
		int					N;
		ZombieHorde();
	public:
		ZombieHorde(int num);
		~ZombieHorde();
		void	announce();
};
