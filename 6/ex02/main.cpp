/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:43:44 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:43:44 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int main()
{
	srand(time(NULL));
	Base *tmp;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		tmp = generate();
		identify_from_pointer(tmp);
		identify_from_reference(*tmp);
		std::cout << std::endl << "---------------------" << std::endl;
		delete tmp;
	}
}
