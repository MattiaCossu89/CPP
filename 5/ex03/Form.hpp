/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:35:01 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 17:11:01 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <exception>
#include <iostream>
#include <string>

#define str_t std::string
class Bureaucrat;
class Form
{
	private:
		const str_t	_name;
		const int	_gradeExec;
		const int	_gradeSign;
		bool		_signed;
		Form();
	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade to apply the form too high";
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade to apply the form too low";
			}
		};
		class GradeToExecTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade to exec the form too low";
			}
		};
		Form(const str_t &name, int gradeSign, int gradeExec);
		Form(const Form &copy);
		virtual ~Form();
		Form &operator=(const Form &copy);
		const str_t	&getName() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		bool		isSigned() const;
		void		beSigned(const Bureaucrat &bur);
		void		checkBureaucratExec(Bureaucrat const & executor) const;
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form& bur);

#endif
