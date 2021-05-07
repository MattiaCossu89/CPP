/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:54:26 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 17:10:12 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat *gianni;
	Bureaucrat *mario;
	Form *f1, *f2;

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
		f1 = new ShrubberyCreationForm("F1");
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		f2 = new RobotomyRequestForm("F2");
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *gianni << std::endl;
	std::cout << *mario << std::endl;
	gianni->decGrade();
	mario->incGrade();
	std::cout << *f1 << std::endl;
	std::cout << *f2 << std::endl;
	gianni->signForm(*f1);
	mario->signForm(*f2);
	std::cout << *f1 << std::endl;
	std::cout << *f2 << std::endl;
	f1->execute(*gianni);
	f2->execute(*gianni);
	delete gianni;
	delete mario;
	delete f1;
	delete f2;
}
