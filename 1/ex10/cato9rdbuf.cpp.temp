/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cato9rdbuf.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:31:22 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:31:23 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, const char **av)
{
	std::string line;
	std::stringstream ss;
	char c = 0;
	if (ac == 1)
	{
		std::cin.rdbuf();
		c = char(std::cin.get());
		while (c != EOF)
		{
			 std::cout << c;
			 c = char(std::cin.get());
		}
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
		in.rdbuf();
		c = char(in.get());
		while (c != EOF)
		{
			std::cout << c;
			c = char(in.get());
		}
		in.close();
	}
	return (0);
}
