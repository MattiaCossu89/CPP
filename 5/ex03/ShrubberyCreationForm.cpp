/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:15:38 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 18:13:55 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

bool ShrubberyCreationForm::first = true;

str_t ShrubberyCreationForm::trees[4];

void ShrubberyCreationForm::createShrubberyTrees()
{
	std::stringstream ss;
	ss
		<<"             {{ }{" << std::endl
		<<"            {{}}}{{" << std::endl
		<<"          {{}}{}}" << std::endl
		<<"             }}}}{" << std::endl
		<<"            {{}}}" << std::endl
		<<"           }{{}{}}" << std::endl
		<<"             {{}{}}" << std::endl
		<<"           }}{{}}" << std::endl
		<<"            {{}}{{" << std::endl
		<<"             \\  /" << std::endl
		<<"          .-''| |``-." << std::endl
		<<"         '-._/_o_\\_.-'" << std::endl
		<<"          '._     _.'" << std::endl
		<<"           | :F_P: |" << std::endl
		<<"           '._    .'" << std::endl
		<<"              '--'" << std::endl;
	trees[0] = ss.str();
	ss.str("");
	ss
		<< "         #o#" << std::endl
		<< "       ####o#" << std::endl
		<< "      #o# \\#|_#,#" << std::endl
		<< "     ###\\ |/   #o#" << std::endl
		<< "      # {}{      #" << std::endl
		<< "         }{{" << std::endl
		<< "        ,'  '" << std::endl;
	trees[1] = ss.str();
	ss.str("");
	ss
		<< "     ,\\" << std::endl
		<< "    # (_" << std::endl
		<< "      _)\\##" << std::endl
		<< "  ###/((_" << std::endl
		<< "       ))\\####" << std::endl
		<< "     _((" << std::endl
		<< "####/  )\\" << std::endl
		<< "     ,;;\"`;," << std::endl
		<< "    (_______)" << std::endl
		<< "      \\===/" << std::endl
		<< "      /===\\" << std::endl
		<< "     /=aat=\\" << std::endl;
	trees[2] = ss.str();
	ss.str("");
	ss
		<< "       ,.," << std::endl
		<< "      MMMM_    ,..," << std::endl
		<< "        \"_ \"__\"MMMMM          ,...,," << std::endl
		<< " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl
		<< "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl
		<< " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl
		<< "        ,., _\"__ \\__./ .\"" << std::endl
		<< "       MMMMM_\"  \"_    ./" << std::endl
		<< "        ''''      (    )" << std::endl
		<< " ._______________.-'____\"---._." << std::endl
		<< "  \\                          /" << std::endl
		<< "   \\________________________/" << std::endl
		<< "   (_)                    (_)" << std::endl;
	trees[3] = ss.str();
	ss.str("");
}

ShrubberyCreationForm::ShrubberyCreationForm(const str_t &target) : Form(target, 145, 137)
{
	if (first)
	{
		srand(time(NULL));
		createShrubberyTrees();
		first = false;
	}
}

// ShrubberyCreationForm::ShrubberyCreationForm(str_t target) : Form(target, 145, 137)
// {
// 	if (first)
// 	{
// 		srand(time(NULL));
// 		createShrubberyTrees();
// 		first = false;
// 	}
// }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	this->~ShrubberyCreationForm();
	new (this) ShrubberyCreationForm(copy);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->checkBureaucratExec(executor);
	std::ofstream file;
	file.open((this->getName() + "_shrubbery").c_str());
	if (!file.is_open())
		throw ShrubberyCreationForm::OpenFileException();
	file << trees[rand() % 4] << std::endl << std::endl << std::endl << trees[rand() % 4];
	file.close();
}
