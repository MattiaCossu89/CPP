/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   supersed.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:30:52 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:30:52 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Replacer.hpp"

int main(int ac, const char **av)
{
	std::ifstream	file;
	std::string		line, cont = "";
	std::ofstream	out;
	if (ac < 4 || ac > 4)
	{
		std::cout << "\033[31mInvalid Arguments\033[0m" << std::endl;
		return (1);
	}
	if (!av[1][0] || !av[2][0] || !av[3][0])
	{
		std::cout << "\033[31mInvalid Arguments\033[0m" << std::endl;
		return (1);
	}
	file.open(av[1]);
	if (!file.is_open())
	{
		std::cout << "\033[31mInvalid File\033[0m" << std::endl;
		return (1);
	}
	out.open((std::string(av[1]) + ".replace").c_str());
	if (!out.is_open())
	{
		std::cout << "Failed to open " << av[1] << ".replace" << std::endl;
		file.close();
		return (1);
	}
	while (getline(file, line))
		cont += line + "\n";
	file.close();
	Replacer rp(cont, av[2], av[3]);
	out << rp.getReplacedString();
	out.close();
}
