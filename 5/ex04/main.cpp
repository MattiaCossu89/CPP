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
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	doIT(OfficeBlock &ob, const str_t &f_name, const str_t &target)
{
	try
	{
		ob.doBureaucracy(f_name, target);
	}
	catch (OfficeBlock::NoInternException & e)
	{
		std::cout << RED "No Internal officer in Block" NRM << std::endl;
	}
	catch (OfficeBlock::NoSignBureaucracerException & e)
	{
		std::cout << RED "No Signer in Block" NRM << std::endl;
	}
	catch (OfficeBlock::NoExecBureaucracerException & e)
	{
		std::cout << RED "No Executer in Block" NRM << std::endl;
	}
	catch (OfficeBlock::InexistentFormException & e)
	{
		std::cout << YELLOW << f_name << RED " form not found" NRM << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << RED "The Signer grade is too low for " YELLOW << f_name << NRM << std::endl;
	}
	catch (Form::GradeToExecTooLowException & e)
	{
		std::cout << RED "The Executer grade is too lowfor " YELLOW << f_name << NRM << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << RED "oh god, unknown error, what to do ?!" NRM << std::endl;
	}
}

Bureaucrat *createBureaucrat(const std::string &name, int grade)
{
	Bureaucrat *tmp;
	try
	{
		tmp = new Bureaucrat(name, grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete tmp;
		return (0);
	}
	return tmp;
}

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	doIT(ob, "ciao", "ciao");
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	doIT(ob, "ciao", "ciao");
	ob.setExecutor(hermes);
	doIT(ob, "mutant pig termination", "Pigley");
	doIT(ob, "shrubbery", "Hello");
	doIT(ob, "presidential", "Jim");
	doIT(ob, "Robotomy", "Mark");
}
