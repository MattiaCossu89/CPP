/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:52:00 by mcossu            #+#    #+#             */
/*   Updated: 2021/04/21 18:52:01 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
		for(size_t j = 0; j < strlen(av[i]); j++)
			putchar(toupper(av[i][j]));
	std::cout << std::endl;
}
