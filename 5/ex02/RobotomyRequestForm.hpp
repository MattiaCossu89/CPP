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

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "colors.hpp"
#include "Form.hpp"

#include <stdlib.h>
#include <unistd.h>

#include <ctime>
#include <exception>
#include <iostream>
#include <fstream>
#include <string>

#define str_t std::string

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();
		static bool first;
	public:
		RobotomyRequestForm(const str_t &target);
		// RobotomyRequestForm(str_t target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &copy);
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
