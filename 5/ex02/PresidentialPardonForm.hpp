/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:15:30 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 17:15:30 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

#include <stdlib.h>
#include <unistd.h>

#include <ctime>
#include <exception>
#include <iostream>
#include <fstream>
#include <string>

#define str_t std::string

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(const std::string &target);
		// PresidentialPardonForm(str_t target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &copy);
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
