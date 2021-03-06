/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:54:20 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 16:29:28 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const str &name, int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_name = name;
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	_name = copy._name;
	_grade = copy._grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	_name = copy._name;
	_grade = copy._grade;
	return (*this);
}

const str	&Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::incGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void		Bureaucrat::decGrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat& bur)
{
	os << YELLOW << bur.getName() << NRM << ", bureaucrat grade " << bur.getGrade();
	return (os);
}
