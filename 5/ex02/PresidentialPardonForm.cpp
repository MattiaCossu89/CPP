/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:15:27 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 17:15:27 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(target, 25, 5)
{

}

// PresidentialPardonForm::PresidentialPardonForm(str_t target) : Form(target, 25, 5)
// {

// }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	this->~PresidentialPardonForm();
	new (this) PresidentialPardonForm(copy);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkBureaucratExec(executor);
	std::cout << getName() << "has been pardoned by Zafod Beeblebrox" << std::endl;
}
