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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	doIT(const Bureaucrat *bur, Form &form)
{
	if (!bur)
	{
		std::cout << RED "Inexistent Bureaucrat" NRM << std::endl;
		return ;
	}
	try
	{
		bur->signForm(form);
		form.execute(*bur);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
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
	Bureaucrat *gianni;
	Bureaucrat *mario;
	Intern intern;
	Form *forms[5];
	gianni = createBureaucrat("Gianni", 1);
	mario = createBureaucrat("Mario", 120);
	forms[0] = intern.makeForm("shrubbery", "Trees");
	forms[1] = intern.makeForm("shrubbery create", "Beauty");
	forms[2] = intern.makeForm("presidential pardon", "Mike");
	forms[3] = intern.makeForm("Robotomy Request", "Fool");
	forms[4] = intern.makeForm("robotomy request", "Jim");
	doIT(gianni, *(forms[0]));
	doIT(gianni, *(forms[1]));
	doIT(gianni, *(forms[2]));
	doIT(gianni, *(forms[3]));
	doIT(gianni, *(forms[4]));
	doIT(mario, *(forms[0]));
	doIT(mario, *(forms[1]));
	doIT(mario, *(forms[2]));
	doIT(mario, *(forms[3]));
	doIT(mario, *(forms[4]));
	delete gianni;
	delete mario;
}
