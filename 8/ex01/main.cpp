/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:52:41 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/16 16:35:25 by mcossu           ###   ########.fr       */
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
	try
	{
		s.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	for (unsigned int i = 0; i < s.capacity(); i++)
		s.addNumber(i * 4);
	Span s1(10000);
	for (unsigned int i = 0; i < s.capacity(); i++)
		s1.addNumber(rand() % 1000000);
	std::cout << "s shortest span: " << s.shortestSpan() << std::endl;
	std::cout << "s longest span: " << s.longestSpan() << std::endl;
	std::cout << "s1 shortest span: " << s1.shortestSpan() << std::endl;
	std::cout << "s1 longest span: " << s1.longestSpan() << std::endl;
	Span s2(10);
	s2.addNumbers(0, 10);
	Span s3(10);
	s3.addNumbers(10, 0, -1);
	Span s4(10);
	s4.addNumbers(0, 100, 10);
	std::cout << "s2 shortest span: " << s2.shortestSpan() << std::endl;
	std::cout << "s2 longest span: " << s2.longestSpan() << std::endl;
	std::cout << "s3 shortest span: " << s3.shortestSpan() << std::endl;
	std::cout << "s3 longest span: " << s3.longestSpan() << std::endl;
	std::cout << "s4 shortest span: " << s4.shortestSpan() << std::endl;
	std::cout << "s4 longest span: " << s4.longestSpan() << std::endl;
}
