/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:54:23 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 17:11:20 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"
#include "Form.hpp"

#include <exception>
#include <iostream>
#include <string>

#define str std::string
class Form;
class Bureaucrat
{
	private:
		str	_name;
		int	_grade;
		Bureaucrat();
	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return RED "Grade too high" NRM;
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return RED "Grade too low" NRM;
			}
		};
		Bureaucrat(const str &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &copy);
		const str	&getName() const;
		int			getGrade() const;
		void		incGrade();
		void		decGrade();
		void		signForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat& bur);

#endif
