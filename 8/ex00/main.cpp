/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:03:15 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 16:22:58 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <vector>

int main()
{
	std::vector<int> v(10);
	std::vector<int>::iterator it = v.begin();
	int i = 0;
	for(; it != v.end(); it++)
	{
		*it = i;
		i++;
	}

	std::deque<int> m;
	for (int i = 0; i < 10; i++)
		m.push_front(i);

	std::list<int> l;
	for (int i = 0; i < 10; i++)
		l.push_back(i);

	std::cout << easyfind(v, 3) << std::endl;
	std::cout << easyfind(m, 3) << std::endl;
	std::cout << easyfind(l, 3) << std::endl;

	try
	{
		std::cout << easyfind(v, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "not found" << std::endl;
	}
}
