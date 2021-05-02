/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:31:26 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:31:27 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, const char **av)
{
	std::string line;
	if (ac == 1)
	{
		while (getline(std::cin, line))
			std::cout << line << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::ifstream in;
		in.open(av[i]);
		if (!in.is_open())
		{
			std::cerr << "cato9tails: " << av[i] << ": File o directory non esistente" << std::endl;
			continue ;
		}
		while (getline(in, line))
			std::cout << line << std::endl;
		in.close();
	}
	return (0);
}
