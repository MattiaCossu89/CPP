#include "Intern.hpp"

const Intern::map_t Intern::map[3] = {
	{
		"presidential pardon Presidential Pardon",
		&Intern::createPresidential
	},
	{
		"Robotomy Request robotomy request",
		&Intern::createRobotomy
	},
	{
		"Shrubbery Create shrubbery create",
		&Intern::createShrubbery
	}
};

Form *Intern::createPresidential(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::createRobotomy(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::createShrubbery(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(const std::string &f_name, const std::string &target) const
{
	for (int i = 0; i < 3; i++)
		if (map[i].name.find(f_name) != std::string::npos)
		{
			std::cout << "Intern creates " GREEN << f_name << NRM << std::endl;
			return (map[i].met(target));
		}
	std::cout << RED << f_name << NRM " Form doesn't exists" << std::endl;
	return (0);
}
