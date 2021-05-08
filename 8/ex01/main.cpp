/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:52:41 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 16:53:28 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include "stdlib.h"

#include <ctime>
#include <iostream>

int main()
{
	srand(time(0));
	Span s(100);
	for (unsigned int i = 0; i < s.capacity(); i++)
		s.addNumber(i * 4);
	Span s1(10000);
	for (unsigned int i = 0; i < s.capacity(); i++)
		s1.addNumber(rand() % 1000000);
	std::cout << "s shortest span: " << s.shortestSpan() << std::endl;
	std::cout << "s longest span: " << s.longestSpan() << std::endl;
	std::cout << "s1 shortest span: " << s1.shortestSpan() << std::endl;
	std::cout << "s1 longest span: " << s1.longestSpan() << std::endl;
}
