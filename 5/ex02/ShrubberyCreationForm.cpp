/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:15:38 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 18:13:55 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const str &target) : Form(target, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	this->~ShrubberyCreationForm();
	new (this) ShrubberyCreationForm(copy);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	std::ofstream file;
	file.open(this->getName() + "_shrubbery");
	if (!file.is_open())
		throw ShrubberyCreationForm::OpenFileException();
	file
		<<"             {{ }{" << std::endl
		<<"            {{}}}{{" << std::endl
		<<"          {{}}{}}" << std::endl
		<<"             }}}}{" << std::endl
		<<"            {{}}}" << std::endl
		<<"           }{{}{}}" << std::endl
		<<"             {{}{}}" << std::endl
		<<"           }}{{}}" << std::endl
		<<"            {{}}{{" << std::endl
		<<"             \\  /" << std::endl
		<<"          .-''| |``-." << std::endl
		<<"         '-._/_o_\\_.-'" << std::endl
		<<"          '._     _.'" << std::endl
		<<"           | :F_P: |" << std::endl
		<<"           '._    .'" << std::endl
		<<"              '--'" << std::endl;
	file.close();
}
