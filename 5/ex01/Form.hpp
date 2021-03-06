/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:35:01 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 17:47:57 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "colors.hpp"
#include "Bureaucrat.hpp"

#include <exception>
#include <iostream>
#include <string>

#define str std::string
class Bureaucrat;
class Form
{
	private:
		const str	_name;
		const int	_gradeExec;
		const int	_gradeSign;
		bool		_signed;
		Form();
	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return RED "Grade to apply the form too high" NRM;
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return RED "Grade to apply the form too low" NRM;
			}
		};
		Form(const str &name, int gradeSign, int gradeExec);
		Form(const Form &copy);
		~Form();
		Form 			&operator=(const Form &copy);
		const str		&getName() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		bool			isSigned() const;
		void			beSigned(const Bureaucrat &bur);
};

std::ostream &operator<<(std::ostream &os, const Form& bur);

#endif
