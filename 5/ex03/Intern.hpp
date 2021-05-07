#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

class Intern
{
	private:
		typedef Form *(*fun)(const std::string &);
		typedef struct	map_s
		{
			std::string name;
			fun met;
		}				map_t;
		static Form *createPresidential(const std::string &target);
		static Form *createRobotomy(const std::string &target);
		static Form *createShrubbery(const std::string &target);
		static const map_t map[3];
	public:
		Form *makeForm(const std::string &f_name, const std::string &target) const;
};

#endif
