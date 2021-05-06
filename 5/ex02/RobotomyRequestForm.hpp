/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:15:35 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 19:15:10 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONShrubberyCreationForm_HPP
#define SHRUBBERYCREATIONShrubberyCreationForm_HPP

#include "Form.hpp"

#include <exception>
#include <iostream>
#include <fstream>
#include <string>

#define str std::string

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
		class OpenFileException : std::exception
		{
			virtual const char * what()
			{
				std::cout << "File not found" << std::endl;
			}
		};
	public:
		ShrubberyCreationForm(const str &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &copy);
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
