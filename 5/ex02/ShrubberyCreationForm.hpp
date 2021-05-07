/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:15:41 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 17:48:48 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATION_HPP
#define SHRUBBERYCREATION_HPP

#include "Form.hpp"

#include <stdlib.h>

#include <ctime>
#include <exception>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define str_t std::string

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
		class OpenFileException : std::exception
		{
			virtual const char * what() const throw()
			{
				return ("File not found");
			}
		};
		static bool first;
		static str_t trees[4];
		static void createShrubberyTrees();
	public:
		ShrubberyCreationForm(const str_t &target);
		// ShrubberyCreationForm(str_t target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &copy);
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
