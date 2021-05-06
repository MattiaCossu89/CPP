/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:54:26 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 17:05:05 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *gianni;
	Bureaucrat *mario;
	Bureaucrat *marco;
	Bureaucrat *manuele;

	try
	{
		gianni = new Bureaucrat("Gianni", 1);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		mario = new Bureaucrat("Mario", 150);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		marco = new Bureaucrat("Marco", 151);
	}
	catch (const std::exception &e)
	{
		std::cout << "try to create grade 151" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try
	{
		manuele = new Bureaucrat("Manuele", 0);
	}
	catch (const std::exception &e)
	{
		std::cout << "try to create grade 0" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try
	{
		gianni->incGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << "try to increment grade 1" << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		mario->decGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << "try to decrement grade 150" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << *gianni << std::endl;
	std::cout << *mario << std::endl;
	gianni->decGrade();
	mario->incGrade();
	std::cout << *gianni << std::endl;
	std::cout << *mario << std::endl;
	delete gianni;
	delete mario;
	delete marco;
	delete manuele;

}
