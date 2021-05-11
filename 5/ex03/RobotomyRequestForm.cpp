/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:15:32 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 13:58:45 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

bool RobotomyRequestForm::first = true;

RobotomyRequestForm::RobotomyRequestForm(const str_t &target) : Form(target, 72, 45)
{
	if (first)
	{
		srand(time(NULL));
		first = false;
	}
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	this->~RobotomyRequestForm();
	new (this) RobotomyRequestForm(copy);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkBureaucratExec(executor);
	std::cout << "\a\033[1A" << std::endl;
	usleep(500000);
	if (rand() % 2)
		std::cout << YELLOW << getName() << NRM " has been" GREEN " robotomized successfully!" NRM << std::endl;
	else
		std::cout << YELLOW << getName() << RED " robotomization failed!" NRM << std::endl;
}
