#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"

#include <exception>
#include <iostream>
#include <string>

#define str_t std::string

class OfficeBlock
{
	private:
		Intern		*_intern;
		Bureaucrat	*_signBureau;
		Bureaucrat	*_execBureau;
	public:
		class NoEnoughOfficersExecption : public std::exception {};
		class NoInternException : public NoEnoughOfficersExecption
		{
			virtual const char * what() const throw()
			{
				return (RED "No Inernal officer" NRM);
			}
		};
		class NoSignBureaucracerException : public NoEnoughOfficersExecption
		{
			virtual const char * what() const throw()
			{
				return (RED "No Bureaucracer that can sign the form" NRM);
			}
		};
		class NoExecBureaucracerException : public NoEnoughOfficersExecption
		{
			virtual const char * what() const throw()
			{
				return (RED "No Bureaucracer that can execute the form" NRM);
			}
		};
		class InexistentFormException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return (RED "No Form type found" NRM);
			}
		};
		OfficeBlock();
		OfficeBlock(Intern &intern);
		void	setIntern(Intern &intern);
		void	setSigner(Bureaucrat &bur);
		void	setExecutor(Bureaucrat &bur);
		void	doBureaucracy(const str_t &name, const str_t &target);
};

#endif
