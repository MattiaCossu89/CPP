/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:29:24 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:29:24 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	int n = 0;
	while (n <= 0)
	{
		std::cout << "Please Insert the number of Zombie that you want" << std::endl;
		std::cin >> n;
		if (n <= 0)
			std::cout << "Please insert a positive not 0 number" << std::endl;
	}
	ZombieHorde zh = ZombieHorde(n);
	zh.announce();
}
